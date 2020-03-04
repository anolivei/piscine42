/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 06:47:46 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/12 19:25:48 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_iterative_factorial(int nb);

int	main(void)
{
	int nb;

	nb = -1;
	printf("Fatorial de %d: 0\nResultado: %d\n\n", nb, ft_iterative_factorial(nb));
	nb = 0;
	printf("Fatorial de %d: 1\nResultado: %d\n\n", nb, ft_iterative_factorial(nb));
	nb = 1;
	printf("Fatorial de %d: 1\nResultado: %d\n\n", nb, ft_iterative_factorial(nb));
	nb = 2;
	printf("Fatorial de %d: 2\nResultado: %d\n\n", nb, ft_iterative_factorial(nb));
	nb = 3;
	printf("Fatorial de %d: 6\nResultado: %d\n\n", nb, ft_iterative_factorial(nb));
	nb = 4;
	printf("Fatorial de %d: 24\nResultado: %d\n\n", nb, ft_iterative_factorial(nb));
	nb = 5;
	printf("Fatorial de %d: 120\nResultado: %d\n\n", nb, ft_iterative_factorial(nb));
	nb = 10;
	printf("Fatorial de %d: 3628800\nResultado: %d\n\n", nb, ft_iterative_factorial(nb));
	nb = 11;
	printf("Fatorial de %d: 39916800\nResultado: %d\n\n", nb, ft_iterative_factorial(nb));
	nb = 12;
	printf("Fatorial de %d: 479001600\nResultado: %d\n\n", nb, ft_iterative_factorial(nb));
	nb = 13;
	printf("Fatorial de %d: 6227020800\nResultado: %d\n\n", nb, ft_iterative_factorial(nb));

	return (0);
}
