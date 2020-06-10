/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwinston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:25:03 by hwinston          #+#    #+#             */
/*   Updated: 2019/11/29 15:29:39 by hwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void			ft_putrstr(t_flag *flags)
{
	unsigned int i;

	if (!flags->arg)
		return ;
	i = 0;
	while (flags->arg[i])
		ft_putrchar(flags->arg[i++], flags);
}
