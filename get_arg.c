/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwinston <hwinston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:31:08 by hwinston          #+#    #+#             */
/*   Updated: 2020/02/20 12:06:13 by hwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static char	*get_digit(va_list ap, char opt, t_flag *flags)
{
	int		n;
	int		nb;
	char	*arg;

	if (opt == 'u')
		return (arg = ft_utoa(va_arg(ap, unsigned int)));
	if (flags->width > 0 || flags->prec > 0)
	{
	 	n = va_arg(ap, int);
	 	if (n < 0)
	 		flags->sign = 1;
	 	nb = ft_absval(n);
	 	return (arg = ft_itoa(nb));
	}
	return (arg = ft_itoa(va_arg(ap, int)));
}

static char	*get_char(va_list ap, char opt)
{
	char	*arg;
	char	c;
	char	*s;

	s = "%";
	if (opt == 'c')
	{
		c = va_arg(ap, int) + 0;
		if (!(arg = ft_strndup(&c, 1)))
			return (NULL);
	}
	if (opt == '%')
		if (!(arg = ft_strdup(s)))
			return (NULL);
	return (arg);
}

static char	*get_string(va_list ap)
{
	char	*arg;
	char	*s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		if (!(arg = ft_strdup("(null)")))
			return (NULL);
	}
	else if (!(arg = ft_strdup(s)))
		return (NULL);
	return (arg);
}

char		*get_arg(va_list ap, char opt, t_flag *flags)
{
	char	*arg;

	if (opt == 's')
		if (!(arg = get_string(ap)))
			return (NULL);
	if (opt == 'c' || opt == '%')
		if (!(arg = get_char(ap, opt)))
			return (NULL);
	if (opt == 'i' || opt == 'd' || opt == 'u')
		if (!(arg = get_digit(ap, opt, flags)))
			return (NULL);
	if (opt == 'p' || opt == 'x' || opt == 'X')
		if (!(arg = get_addr(ap, opt)))
			return (NULL);
	return (arg);
}
