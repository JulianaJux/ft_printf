/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:18:03 by jde-alen          #+#    #+#             */
/*   Updated: 2021/10/30 19:18:31 by jde-alen         ###   ########.fr       */
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
		ft_putchar(arg);
		return (1);
}

/*uma que mostra %s*/
int process_str(va_list types)
{
	char *arg;

	arg = var_arg(types, char *);
	if (arg == 0)
	{
		write(1, "null", 4);
		return (4);
	}
	ft_putstr(arg);
	return (ft_strlen(arg));
}

/*uma que mostra %u/

/*uma que mostra %x/

/*uma que mostra %X/

/*uma que mostra %*/

/*uma que mostra *p*/
