/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwinston <hwinston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 13:23:37 by hwinston          #+#    #+#             */
/*   Updated: 2020/02/26 22:12:32 by hwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	init_flags(t_flag *flags)
{
	flags->flag = 1;
	flags->width = 0;
	flags->prec = -1;
	flags->fill_c = ' ';
	flags->arg_size = 0;
	flags->sign = 0;
	flags->ret = 0;
	flags->zero = 0;
}

static int	put_arg(va_list ap, char *format, int *i)
{
	t_flag	flags;

	init_flags(&flags);
	check_flag(&flags, format, i);
	check_width(ap, &flags, format, i);
	check_prec(ap, &flags, format, i);

	if (!(is_opt(format[*i])))
		return (0);
	if (!(flags.arg = get_arg(ap, format[*i], &flags)))
		return (-1);
	if (format[*i] == 'c')
		flags.arg_size = 1;
	else
		flags.arg_size = ft_strlen(flags.arg) + flags.sign;
	if (format[*i] == 's')
		write_s_arg(&flags);
	else if (format[*i] == 'p')
		write_p_arg(&flags);
	else if (format[*i] == '%')
		write_mod_arg(&flags);
	else
		write_arg(&flags, format[*i]);
	ft_free_str(&flags.arg);
	*i += 1;
	return (flags.ret);
}

int			ft_printf(char const *format, ...)
{
	va_list		ap;
	int			ret;
	int			tmp;
	int			i;

	va_start(ap, format);
	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[++i])
		{
			if ((tmp = put_arg(ap, (char *)format, &i)) == -1)
				return (-1);
			ret += tmp;
		}
		else
		{
			write(1, &format[i++], 1);
			ret++;
		}
	}
	va_end(ap);
	return (ret);
}
