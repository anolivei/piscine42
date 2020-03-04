/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ler_entrada.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 02:36:41 by cpereira          #+#    #+#             */
/*   Updated: 2019/12/11 19:24:28 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"
#include "../headers/ft.h"

void	entrada(int g_t_linha, int finaliza, int i, char c)
{
	int		fd;
	char	linha[500000];

	fd = open("entrada.txt", O_WRONLY | O_CREAT, 0777);
	while (finaliza == 0)
	{
		while (c != '\n')
		{
			read(0, &c, 1);
			linha[i] = c;
			write(fd, &c, 1);
			i++;
		}
		linha[i] = c;
		if (g_t_linha == 0)
			ler_cabecalho(linha, 0);
		g_t_linha++;
		c = '0';
		if (g_t_linha > g_t_linhas)
		{
			write(fd, "\0", 1);
			finaliza = 1;
		}
	}
	close(fd);
}
