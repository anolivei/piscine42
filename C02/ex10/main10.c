/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 21:25:36 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/03 16:19:38 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char *dest;
	char *src;
	unsigned int retorno;
	char destino[] = "aaaaaaaaaaaaaaaaa";
	char origem[] = "Oi, eu sou o Goku!";

	dest = destino;
	src = origem;

	printf("origem antes: %s\n", origem);
	printf("destino antes: %s\n", destino);
	retorno = ft_strlcpy(dest, src, 0);
	printf("origem depois: %s\n", origem);
	printf("destino depois: %s\n", destino);
	printf("retorno: %d\n", retorno);
}
