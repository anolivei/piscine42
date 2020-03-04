/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 17:25:59 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/27 18:14:53 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int dividendo;
	int divisor;
	int *a;
	int *b;

	dividendo = 27;
	divisor = 6;
	a = &dividendo;
	b = &divisor;

	printf("valor a %d\n", *a);
	printf("endereco a %p\n", a);
	printf("valor b %d\n", *b);
	printf("endereco b %p\n", b);

	ft_ultimate_div_mod(a, b);

	printf("valor a %d\n", *a);
	printf("endereco a %p\n", a);
	printf("valor b %d\n", *b);
	printf("endereco b %p\n", b);
}
