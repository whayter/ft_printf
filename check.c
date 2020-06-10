/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwinston <hwinston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:22:11 by hwinston          #+#    #+#             */
/*   Updated: 2020/02/26 23:41:12 by hwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		is_opt(char c)
{
	char const	opts[] = "cspdiuxX%";
	int			i;

	i = -1;
	while (opts[++i])
		if (c == opts[i])
			return (1);
	return (0);
}

void	check_flag(t_flag *flags, char *format, int *i)
{
	if (format[*i] == '0')
	{
		flags->fill_c = '0';
		flags->zero = 1;
		*i += 1;
	}
	if (format[*i] == '-')
	{
		flags->flag = -1;
		flags->fill_c = ' ';
		*i += 1;
	}
	if (format[*i] == '0' && flags->flag != -1)
	{
		flags->fill_c = '0';
		flags->zero = 1;
		*i += 1;
	}
}

void	check_width(va_list ap, t_flag *flags, char *format, int *i)
{
	while (format[*i] == '-')
		*i += 1;
	if (ft_isdigit(format[*i]))
	{
		flags->width = ft_atoi(&format[*i]);
		while (ft_isdigit(format[*i]))
			*i += 1;
	}
	if (format[*i] == '*')
	{
		flags->width = va_arg(ap, int);
		if (flags->width < 0)
		{
			flags->flag = -1;
			flags->width *= -1;
			flags->fill_c = ' ';
		}
		*i += 1;
	}
}

void	check_prec(va_list ap, t_flag *flags, char *format, int *i)
{
    if (format[*i] != '.')
        return ;
    *i += 1;
    flags->prec = 0;
    if (ft_isdigit(format[*i]))
    {
        flags->prec = ft_atoi(&format[*i]);
        while (ft_isdigit(format[*i]))
            *i += 1;
    }
    if (format[*i] == '*')
    {
        flags->prec = va_arg(ap, int);
        *i += 1;
        if (flags->prec < 0)
        {
            flags->prec = -1;
            return ;
        }
    }
    flags->fill_c = ' ';
}
