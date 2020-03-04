/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 04:44:14 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/27 17:05:27 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 33;
	b = 2;
	div = &a;
	mod = &b;

	printf("endereço a %p\n", div);
	printf("dividendo a %d\n", *div);
	printf("endereço b %p\n", mod);
	printf("divisor b %d\n", *mod);

	ft_div_mod(a, b, div, mod);

	printf("endereço div %p\n", div);
	printf("quociente div %d\n", *div);
	printf("endereço mod %p\n", mod);
	printf("resto mod %d\n", *mod);
}
