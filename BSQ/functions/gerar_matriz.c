/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gerar_matriz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 02:38:49 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/11 18:02:14 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"
#include "../headers/ft.h"

void	gerar_matriz(char *linha, int i)
{
	while (linha[i] != '\0')
	{
		if (g_t_linha == 1)
		{
			g_matriz[0][i] = 0;
		}
		if (linha[i] == g_c_obs)
			g_matriz[g_t_linha][i + 1] = 0;
		if (linha[i] == g_c_vazio)
			g_matriz[g_t_linha][i + 1] = 1;
		i++	;
	}
	if (g_t_linha == 1)
		g_max_colunas = i;
	else if (g_max_colunas != i)
		g_erro = 3;
	g_t_colunas = i;
}
