/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_convert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:50:57 by jde-alen          #+#    #+#             */
/*   Updated: 2021/11/06 18:10:51 by jde-alen         ###   ########.fr       */
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

char 	*ft_untoa(unsigned int n)
{
	long long int 	nb;
	int				i;
	char			*dst;

	nb = n;
	i = 1;
	while( n / 10 != 0 && i++)
		n = n / 10;
	dst = malloc(i + 1);
	if(!dest)
	return (NULL);
	dst[i] = '\0'
	while (i > -1 && i--)
	{
		dst[i] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (dst);
}

char	*ft_intohex(unsigned long long i, char *l)
{
	unsigned long long	nb;
	int					d;
	char				*dst;

	nb = i;
	d = 1;
	while (i / 16 != 0 && d++)
		i = i / 16;
	dst = malloc(d + 1);
	if (!dst)
		return (NULL);
	dst[d] = '\0';
	while (d > 0 && d --)
	{
		if((nb % 16 <= 9))
			dst[d] = (nb % 16) + '0';
		else
			dst[d] = (nb % 16) - 10 + l;
		nb = nb / 16;
	}
	return (dst);
}
