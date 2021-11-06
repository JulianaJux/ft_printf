/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:08:50 by jde-alen          #+#    #+#             */
/*   Updated: 2021/11/06 18:46:18 by jde-alen         ###   ########.fr       */
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
char	*ft_intohex(unsigned long long i, char *l);
int		process_str(va_list types);
int		process_char(va_list types);
int		process_nbr(va_list types);
int		process_unsig(va_list types);
int		process_hex(va_list types, char str);

#endif