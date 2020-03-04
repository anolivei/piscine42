/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 16:00:49 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/01 21:40:03 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char g_head[5];
char g_bottom[5];
char g_left[5];
char g_right[5];
char l1[5] = {'0'};
char l2[5] = {'0'};
char l3[5] = {'0'};
char l4[5] = {'0'};

void	arruma(char *entrada)
{
	int posicao;

	posicao = 0;
	while (posicao <= 16)
	{
		if (posicao <= 3)
			g_head[posicao] = entrada[posicao];
		if (posicao >= 4 && posicao <= 7)
			g_bottom[posicao - 4] = entrada[posicao];
		if (posicao >= 8 && posicao <= 11)
			g_left[posicao - 8] = entrada[posicao];
		if (posicao >= 12)
			g_right[posicao - 12] = entrada[posicao];
		posicao++;
	}
}

int		entrada(char *input)
{
	int		x;
	char	a_numeros[16];
	int		qtd_numeros;

	qtd_numeros = 0;
	x = 0;
	while (input[x] != '\0')
	{
		if ((input[x] > '4' || input[x] < '1') && input[x] != 32)
			return (1);
		else
		{
			if (input[x] != 32)
			{
				a_numeros[qtd_numeros] = input[x];
				qtd_numeros++;
			}
		}
		x++;
	}
	if (x != 31)
		return (1);
	arruma(a_numeros);
	return (0);
}

int		main(int argc, char *argv[])
{
	int ret;

	ret = entrada(argv[1]);
	if (ret == 1)
		write(1, "Error\n", 6);
	return (0);
}
