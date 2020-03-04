/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   localiza.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 02:45:38 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/11 17:47:47 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"
#include "../headers/ft.h"

void	localiza(void)
{
	int i;
	int j;
	int maior;
	int posic_i;
	int posic_j;

	i = 1;
	j = 1;
	maior = -1;
	while (i <= g_t_linha)
	{
		while (j <= g_t_colunas)
		{
			if (maior < g_matriz[i][j])
			{
				maior = g_matriz[i][j];
				posic_i = i;
				posic_j = j;
			}
			j++;
		}
		j = 0;
		i++;
	}
	imprime_final(posic_i, posic_j, maior);
}
