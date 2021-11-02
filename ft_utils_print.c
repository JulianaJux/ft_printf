/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:18:03 by jde-alen          #+#    #+#             */
/*   Updated: 2021/11/02 18:57:15 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

/*uma que printa*/
int	ft_putchar_fd(const char c, int fd)
{
	write(1, &c, sizeof(c));
	return (1);
}
/*printa string*/
int	ft_putstr_fd(const char *s, int fd)
{
	if (!s)
		return (0);
	while (*s != '\0')
	{
		ft_putchar_fd(*s, 1);
		s++;
	}
	return (ft_strlen(s));
}
/*tamanho total de str*/
int	ft_strlen(const char *s)
{
	unsigned int	j;

	j = 0;
	while (*s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}

/*uma que mostra %d e %i*/

/*uma que mostra %c*/
int	process_char(va_list types)
{
		int arg;

		arg = va_arg(types, int);
		ft_putchar_fd(arg, 1);
		return (1);
}

/*uma que mostra %s
int process_str(va_list types)
{
	char *arg;

	arg = var_arg(types, char *);
	if (arg == 0)
	{
		write(1, "null", 4);
		return (4);
	}
	ft_putstr_fd(arg, 1);
	return (ft_strlen(arg)); 
}*/

/*uma que mostra %u*/

/*uma que mostra %x*/

/*uma que mostra %X*/

/*uma que mostra %*/

/*uma que mostra *p*/
