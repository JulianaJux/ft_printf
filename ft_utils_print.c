/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:18:03 by jde-alen          #+#    #+#             */
/*   Updated: 2021/11/02 19:54:58 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*uma que mostra %c*/
int	process_char(va_list types)
{
		int arg;

		arg = va_arg(types, int);
		ft_putchar_fd(arg, 1);
		return (1);
}

/*uma que mostra %s*/
int process_str(va_list types)
{
	char *arg;

	arg = va_arg(types, char *);
	if (arg == 0)
	{
		write(1, "null", 4);
		return (4);
	}
	ft_putstr_fd(arg, 1);
	return (ft_strlen(arg)); 
}
/*uma que mostra %d e %i*/
int	process_nbr(va_list types)
{
	int 	arg;
	int 	j;
	char	*nbtst;

	arg = va_arg(types, int);
	nbtst = ft_itoa(arg);
	ft_putstr_fd(nbtst, 1);
	j = ft_strlen (nbtst);
	return (j);
}
/*uma que mostra %u*/

/*uma que mostra %x e X*/

/*uma que mostra *p*/
