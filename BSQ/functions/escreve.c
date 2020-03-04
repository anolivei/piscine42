/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 20:06:37 by cpereira          #+#    #+#             */
/*   Updated: 2019/12/11 05:08:49 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"
#include "../headers/ft.h"

void	escreve(char *frase)
{
	int i;

	i = 0;
	while (frase[i] != '\n')
	{
		write(1, &frase[i], 1);
		i++;
	}
}
