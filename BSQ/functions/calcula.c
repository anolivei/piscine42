/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcula.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 02:44:24 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/11 15:55:45 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"
#include "../headers/ft.h"

void	calcula(int i, int j)
{
	int v_inicial;

	while (i <= g_t_linha)
	{
		while (j <= g_t_colunas)
		{
			if (g_matriz[i][j] != 0)
			{
				if (g_matriz[i - 1][j] < g_matriz[i - 1][j - 1])
					v_inicial = g_matriz[i - 1][j];
				else
					v_inicial = g_matriz[i - 1][j - 1];
				if (v_inicial > g_matriz[i][j - 1])
					v_inicial = g_matriz[i][j - 1];
				v_inicial++;
				g_matriz[i][j] = v_inicial;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
