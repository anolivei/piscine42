/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 04:45:40 by cpereira          #+#    #+#             */
/*   Updated: 2019/12/11 18:04:12 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"
#include "../headers/ft.h"

void	imprime_final(int posic_i, int posic_j, int maior)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i < g_t_linha)
	{
		while (j <= g_t_colunas)
		{
			if ((i > posic_i - maior && i <= posic_i) &&
					(j > posic_j - maior && j <= posic_j))
				write(1, &g_c_cheio, 1);
			else
			{
				if (g_matriz[i][j] != 0)
					write(1, &g_c_vazio, 1);
				else
					write(1, &g_c_obs, 1);
			}
			j++;
		}
		write(1, "\n", 1);
		j = 1;
		i++;
	}
}
