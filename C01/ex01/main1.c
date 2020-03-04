/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 03:28:16 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/27 03:53:53 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int x;
	int *pontx1;
	int **pontx2;
	int ***pontx3;
	int ****pontx4;
	int *****pontx5;
	int ******pontx6;
	int *******pontx7;
	int ********pontx8;
	int *********pontx9;

	x = 50;

	pontx1 = &x;
	pontx2 = &pontx1;
	pontx3 = &pontx2;
	pontx4 = &pontx3;
	pontx5 = &pontx4;
	pontx6 = &pontx5;
	pontx7 = &pontx6;
	pontx8 = &pontx7;
	pontx9 = &pontx8;

	printf("%d\n", x);
	ft_ultimate_ft(pontx9);
	printf("%d\n", x);

	return(0);
}
