/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 20:23:14 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/28 00:36:03 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int size = 11;
	int tab[11] = {5, -2, 18, 15, 14, 27, -12, 35, 0, 10, 10};
	int j;

	j = 0;
	while (j < size)
	{
		printf("%d, ", tab[j]);
		j++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	j = 0;
	while (j < size)
	{
		printf("%d, ", tab[j]);
		j++;
	}
}
