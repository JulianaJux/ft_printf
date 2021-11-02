/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:08:50 by jde-alen          #+#    #+#             */
/*   Updated: 2021/11/02 18:32:52 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


int		ft_printf(const char *str, ...);
int 	ft_putchar_fd(const char c, int i);
int		ft_putstr_fd(const char *s, int i);
int		ft_strlen(const char *s);
int 	process_str(va_list types);
int		process_char(va_list types);


#endif