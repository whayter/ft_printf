/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwinston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:15:32 by hwinston          #+#    #+#             */
/*   Updated: 2019/11/29 15:30:43 by hwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

char			*ft_utoa(unsigned int n)
{
	unsigned int	tmp;
	unsigned int	size;
	char			*res;

	if (n == 0)
		return (ft_strdup("0"));
	size = 0;
	tmp = n;
	while (tmp > 0)
	{
		size++;
		tmp /= 10;
	}
	if (!(res = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	res[size] = '\0';
	while (n > 0)
	{
		res[--size] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}
