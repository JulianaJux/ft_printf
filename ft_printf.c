/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:17:59 by jde-alen          #+#    #+#             */
/*   Updated: 2022/03/31 15:23:41 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_types(const char *str, va_list types, int *j)
{
	if (str[*j] == 'c')
		return (process_char(types));
	else if (str[*j] == 's')
		return (process_str(types));
	else if (str[*j] == 'd' || str[*j] == 'i')
		return (process_nbr(types));
	else if (str[*j] == 'u')
		return (process_unsig(types));
	else if (str[*j] == 'p' || str[*j] == 'X' || str[*j] == 'x')
		return (process_hex(types, str[*j]));
	else
	{
		write(1, '%', 1);
		if (str[*j] != '%')
			ft_putchar_fd(str[*j], 1);
	}
	return (1);
}

int	ft_printf(const'char *str, ...)
{
	va_list	types;
	int		j;
	int		t;

	va_start (types, str);
	if (!str)
		return (0);
	while (str[j] != '\0')
	{
		if (str[j] == '%')
		{
			j++;
			t = t + ft_types(str, types, &j);
		}
		else
			t = t + ft_putchar_fd(str[j], 1);
		j++;
	}
	va_end (types);
	return (t);
}
