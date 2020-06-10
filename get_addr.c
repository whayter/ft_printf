/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_addr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwinston <hwinston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 13:23:37 by hwinston          #+#    #+#             */
/*   Updated: 2020/02/25 09:38:23 by hwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	nsize(unsigned int n)
{
	int size;

	if (n == 0)
		return (1);
	size = 0;
	while (n > 0)
	{
		size++;
		n /= 16;
	}
	return (size);
}

static int	nsize_p(unsigned long n)
{
	int size;

	if (n == 0)
		return (1);
	size = 0;
	while (n > 0)
	{
		size++;
		n /= 16;
	}
	return (size);
}

static char	*put_addr(unsigned int add, char opt)
{
	char const	*hex_min = "0123456789abcdef";
	char const	*hex_maj = "0123456789ABCDEF";
	int			size;
	char		*addr;

	size = nsize(add);
	if (!(addr = malloc(sizeof(char) * size + 1)))
		return (NULL);
	addr[size--] = '\0';
	if (add == 0)
	{
		addr[size] = '0';
		return (addr);
	}
	while (add > 0)
	{
		if (opt == 'x')
			addr[size] = hex_min[add % 16];
		else
			addr[size] = hex_maj[add % 16];
		size--;
		add /= 16;
	}
	return (addr);
}

static char	*put_addr_p(unsigned long add)
{
	char const	*hex_min = "0123456789abcdef";
	int			size;
	char		*addr;

	size = nsize_p(add);
	if (!(addr = malloc(sizeof(char) * size + 1)))
		return (NULL);
	addr[size--] = '\0';
	if (add == 0)
	{
		addr[size] = '0';
		return (addr);
	}
	while (add > 0)
	{
		addr[size] = hex_min[add % 16];
		size--;
		add /= 16;
	}
	return (addr);
}

char		*get_addr(va_list ap, char opt)
{
	char	*arg;
	void	*tmp;

	if (opt == 'p')
	{
		if ((tmp = va_arg(ap, void *)) == NULL)
			arg = ft_strdup("0");
		else
		{
			if (!(arg = put_addr_p((unsigned long)tmp)))
				return (NULL);
		}
	}
	else
	{
		if (!(arg = put_addr(va_arg(ap, unsigned int), opt)))
			return (NULL);
	}
	return (arg);
}
