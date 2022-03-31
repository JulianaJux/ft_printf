/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_libft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:44:38 by jde-alen          #+#    #+#             */
/*   Updated: 2022/03/31 15:39:14 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
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
