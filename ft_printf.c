/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:17:59 by jde-alen          #+#    #+#             */
/*   Updated: 2021/10/30 18:46:49 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *string, ...)
{
	va_list types;
	int j;

	while (string != "%")
		ft_putstr(string);

	if (string + 1 == "%")
		ft_putchar("%");

	va_start types;
	

	va_end types;
	return (ft_strlen(string));
}