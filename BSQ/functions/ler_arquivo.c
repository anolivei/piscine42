/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ler_arquivo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 01:29:10 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/12 09:12:52 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"
#include "../headers/ft.h"

void	ler_arquivo(int fd, int p, int ret, int i)
{
	char	buf[5638400 + 1];
	char	linha[500000];

	while ((ret = read(fd, buf, 5638400)))
	{
		buf[ret] = '\0';
		while (buf[i] != '\0')
		{
			if (buf[i] != '\n' && buf[i] != '\0')
				linha[p] = buf[i];
			else
			{
				linha[p] = '\0';
				if (g_t_linha == 0)
					ler_cabecalho(linha, 0);
				else
					gerar_matriz(linha, 0);
				g_t_linha++;
				p = -1;
				linha[0] = '\0';
			}
			p++;
			i++;
		}
	}
}
