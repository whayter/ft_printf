/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwinston <hwinston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:13:31 by hwinston          #+#    #+#             */
/*   Updated: 2020/02/26 23:50:01 by hwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_write_width(t_flag *flags, int size, char c)
{
	int i;

	i = -1;
	while (++i < size)
		ft_putrchar(c, flags);
}

void		write_s_arg(t_flag *flags)
{
	int size;

	//if (flags->prec == 0)
	//	size = flags->width;
	if (flags->prec != -1 && flags->prec < flags->arg_size)
		size = flags->width - flags->prec;
	else
		size = flags->width - flags->arg_size;
	if (flags->flag == 1)
		ft_write_width(flags, size, flags->fill_c);
	if (flags->prec != 0)
		ft_putrnstr(flags);
	if (flags->flag == -1)
		ft_write_width(flags, size, flags->fill_c);
}

void		write_p_arg(t_flag *flags)
{
	const char	prefixe[] = "0x";
	int			width_size;
	int			i;

	width_size = flags->width - flags->arg_size - 2;
	if (flags->flag == 1)
		ft_write_width(flags, width_size, flags->fill_c);
	i = -1;
	while (prefixe[++i])
		ft_putrchar(prefixe[i], flags);
	if (flags->prec != 0)
		ft_putrstr(flags);
	if (flags->flag == -1)
		ft_write_width(flags, width_size, flags->fill_c);
}

void		write_mod_arg(t_flag *flags)
{
	int width_size;

	width_size = flags->width - flags->arg_size;
	if (flags->zero == 1)
		flags->fill_c = '0';
	if (flags->flag == 1)
		ft_write_width(flags, width_size, flags->fill_c);
	ft_putrchar(flags->arg[0], flags);
	if (flags->flag == -1)
		ft_write_width(flags, width_size, ' ');
}

void		write_arg(t_flag *flags, char opt)
{
	int width_size;
	int prec_size;

	prec_size = 0;
	if (flags->prec >= flags->arg_size && opt != '%' && opt != 'c')
		prec_size = flags->prec - flags->arg_size + flags->sign;
	if (flags->prec == 0 && flags->arg[0] == '0' && opt != 'c')
		width_size = flags->width;
	else
		width_size = flags->width - flags->arg_size - prec_size;
	if (flags->sign > 0 && flags->fill_c == '0')
		ft_putrchar('-', flags);
	if (flags->flag == 1)
		ft_write_width(flags, width_size, flags->fill_c);
	if (flags->sign > 0 && flags->fill_c != '0')
		ft_putrchar('-', flags);
	ft_write_width(flags, prec_size, '0');
	if (opt == 'c')
		ft_putrchar(flags->arg[0], flags);
	else if (flags->prec != 0 || flags->arg[0] != '0')
		ft_putrstr(flags);
	if (flags->flag == -1)
		ft_write_width(flags, width_size, flags->fill_c);
}
