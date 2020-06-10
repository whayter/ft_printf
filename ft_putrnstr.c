/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putrnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwinston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:19:40 by hwinston          #+#    #+#             */
/*   Updated: 2019/11/29 15:32:48 by hwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			ft_putrnstr(t_flag *flags)
{
	int			i;
	const char	nul_case[] = "(null)";

	i = 0;
	if (!flags->arg)
	{
		while (nul_case[i])
			ft_putrchar(nul_case[i++], flags);
	}
	else if (flags->prec == -1)
		while (flags->arg[i])
			ft_putrchar(flags->arg[i++], flags);
	else
		while (flags->arg[i] && i < flags->prec)
			ft_putrchar(flags->arg[i++], flags);
}
