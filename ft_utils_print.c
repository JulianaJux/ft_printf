/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:18:03 by jde-alen          #+#    #+#             */
/*   Updated: 2021/10/30 18:47:06 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*uma que printa*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*printa string*/
void	ft_putstr(char *s)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
}

/*uma que mostra %d e %i*/

/*uma que mostra %c*/
/*uma que mostra %s/
/*uma que mostra %u/
/*uma que mostra %x/
/*uma que mostra %X/
/*uma que mostra %*/
/*uma que mostra *p*/
