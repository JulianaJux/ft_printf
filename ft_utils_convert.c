/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_convert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:50:57 by jde-alen          #+#    #+#             */
/*   Updated: 2021/11/02 19:53:23 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	size_t	ft_len(int nb)
{
	size_t	j;
	int		n;

	j = 0;
	if (nb < 0)
	{
		j++;
		n = nb * -1;
	}
	else
		n = nb;
	while (n / 10)
	{
		j++;
		n = n / 10;
	}
	j++;
	return (j);
}

static int	ft_pos(int nb)
{
	if (nb < 0)
		return (0);
	return (1);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	t;
	size_t			j;

	res = (char *)malloc(ft_len(n) + 1);
	if (!(res))
		return (NULL);
	j = 0;
	if (n < 0)
	{
		res[j] = '-';
		j++;
		t = -n;
	}
	else
		t = n;
	res[ft_len(n)] = '\0';
	while (j < ft_len(n))
	{
		res[ft_len(n) - j - ft_pos(n)] = (t % 10) + 48;
		t = t / 10;
		j++;
	}
	return (res);
}