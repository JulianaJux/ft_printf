/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainteste.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:11:08 by jde-alen          #+#    #+#             */
/*   Updated: 2021/11/02 18:12:43 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main ()
{
	int idade;
	char *nome;
	char f_l;
	int f_n;
	unsigned int i;
	int l_hex;
	int u_hex;
	int *p;

	idade = -35;
	nome = "Jux";
	f_l = 'j';
	f_n = -4;
	i = 78;
	l_hex = 0x1f;
	u_hex = 0x1F;
	p = &idade;

	/*  %u, %x, %X, %%*/
	/*ft_printf("Hello World, %d, %s, \n", idade, nome);*/
	printf("Hello World, %d, %s, %c, %i, %p, %u, %x, %X, %%\n", idade, nome, f_l, f_n, p, i, l_hex, u_hex);
	ft_printf("Hello Wold, %c", f_l);
}
/* %u vai precisar tirar o número do unsigned long*/
/* em %x e %X, imprime o que foi especificado no tipo mesmo, não importa o input*/