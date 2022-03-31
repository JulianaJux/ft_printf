/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:08:50 by jde-alen          #+#    #+#             */
/*   Updated: 2022/03/31 15:38:40 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar_fd(const char c, int i);
int		ft_putstr_fd(const char *s, int i);
int		ft_strlen(const char *s);
char	*ft_itoa(int n);
char	*ft_untoa(unsigned int n);
char	*ft_intohex(unsigned long long i, int l);
int		process_str(va_list types);
int		process_char(va_list types);
int		process_nbr(va_list types);
int		process_unsig(va_list types);
int		process_hex(va_list types, char str);
char	*ft_ltoa_base(unsigned long n; char *base);
char	*ft_utoa_base(unsigned int n, char *base)

#endif