/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:17:59 by jde-alen          #+#    #+#             */
/*   Updated: 2021/11/02 19:55:58 by jde-alen         ###   ########.fr       */
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
	/*else if (str[*j] == 'u')
	else if (str[*j] == 'p')
	else if (str[*j] == 'x')
	else if (str[*j] == 'X')*/
	else
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list types;
	int j;
	int t;

	va_start (types, str);
	if (!str)
	return (0);
	
	while (str[j] != '\0')
	{
		if (str[j] == '%')
		{
			if (str[j] + 1 == '%')
			ft_putchar_fd('%', 1);
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
