/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:17:59 by jde-alen          #+#    #+#             */
/*   Updated: 2021/10/30 19:14:53 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_types(const char *str, va_list types, int *j)
{
	if ()
}

int	ft_printf(const char *str, ...)
{
	va_list types;
	int j;

	while (str != "%")
		ft_putstr(str);

	if (str + 1 == "%")
		ft_putchar("%");

	va_start types;
	

	va_end types;
	return (ft_strlen(string));
}