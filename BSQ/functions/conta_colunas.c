/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conta_colunas.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 01:23:08 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/11 04:28:20 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"
#include "../headers/ft.h"

int		conta_colunas(char *linha)
{
	int i;

	i = 0;
	while (linha[i] != '\0')
		i++;
	return (i);
}
