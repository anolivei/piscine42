/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abre_arquivo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 01:27:11 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/11 05:04:59 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"
#include "../headers/ft.h"

int	abre_arquivo(char *nome_arquivo)
{
	int fd;

	fd = open(nome_arquivo, O_RDONLY);
	if (fd == -1)
		return (1);
	else
		ler_arquivo(fd, 0, 0, 0);
	close(fd);
	return (0);
}
