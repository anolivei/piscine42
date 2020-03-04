/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ler_cabecalho.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 01:25:14 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/11 18:14:02 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"
#include "../headers/ft.h"

void	ler_cabecalho(char *linha, int i)
{
	int n_colunas;

	g_t_linhas = 0;
	n_colunas = conta_colunas(linha);
	while (n_colunas >= 0 && linha[n_colunas] <= 32)
		n_colunas--;
	if (n_colunas < 3)
		g_erro = 1;
	else
	{
		g_c_cheio = linha[n_colunas];
		g_c_obs = linha[n_colunas - 1];
		g_c_vazio = linha[n_colunas - 2];
		if ((g_c_cheio == g_c_obs) || (g_c_cheio == g_c_vazio)
			|| g_c_vazio == g_c_obs)
			g_erro = 2;
	}
	n_colunas = n_colunas - 3;
	while (i <= n_colunas)
	{
		g_t_linhas = g_t_linhas * 10 + linha[i] - 48;
		i++;
	}
}
