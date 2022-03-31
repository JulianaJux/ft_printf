/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:07:26 by jde-alen          #+#    #+#             */
/*   Updated: 2022/03/31 15:36:12 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	make_str(unsigned long m, char *base, unsigned long p, char **tmp)
{
	unsigned long	num;
	unsigned long	cont;

	cont = 0;
	num = m;
	while (p > 0)
	{
		*(*tmp + cont) = base[num / p];
		num = num % p;
		p = p / (unsigned long)ft_strlen(base);
		cont++;
	}
}

char	*ft_ltoa_base(unsigned long n, char *base)
{
	unsigned long	cont;
	unsigned long	num;
	unsigned long	pot;
	char			*temp;

	num = n;
	cont = 1;
	while (num >= (unsigned long)ft_strlen(base) && cont++)
		num /= (unsigned long)ft_strlen(base);
	temp = malloc((cont + 1) * sizeof(char));
	if (!temp)
		return(0);
	*(temp + cont) = '\0';
	pot =1;
	while (--cont)
		pot = pot * (unsigned long)ft_strlen(base);
	make_str(n, base, pot, &temp);
	return (temp);
}

char	*ft_utoa_base(unsigned int n, char *base)
{
	unsigned int	cont;
	unsigned int	num;
	unsigned int	pot;
	char			*temp;

	num = n;
	cont = 1;
	while (num >= (unsigned int)ft_strlen(base) && cont++)
		num = num / (unsigned int)ft_strlen(base);
	temp = malloc((cont + 1) * sizeof(char));
	if (!temp)
		return (0);
	*(temp + cont) = '\0';
	pot = 1;
	while (--cont)
		pot = pot * (unsigned int)ft_strlen(base);
	make_str(n, base, pot, &temp);
	return (temp);
}
