/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 03:10:07 by cpereira          #+#    #+#             */
/*   Updated: 2019/12/11 17:56:29 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/header.h"
#include "headers/ft.h"

int	main(int argc, char *argv[])
{
	int cont;

	cont = 1;
	if (argc == 1)
	{
		entrada(0, 0, 0, '0');
		g_t_linha = 0;
		executa("entrada.txt");
	}
	else
	{
		g_t_linha = 0;
		while (cont < argc)
		{
			g_t_linha = 0;
			write(1, "\n", 1);
			executa(argv[cont]);
			cont++;
		}
	}
	return (0);
}
