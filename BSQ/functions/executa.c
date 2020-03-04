/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:52:12 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/11 19:40:11 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"
#include "../headers/ft.h"

void	executa(char *nome_arquivo)
{
	g_erro = 0;
	if (abre_arquivo(nome_arquivo))
		g_erro = 5;
	if (g_t_linha - 1 != g_t_linhas)
		g_erro = 4;
	if (g_erro == 0)
	{
		calcula(1, 1);
		localiza();
	}
	else
	{
		escreve("map error\n\0");
		write(1, "\n", 1);
	}
}
