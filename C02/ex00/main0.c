/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:34:51 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/28 16:14:10 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "mano do ceu!";
	char destino[] = "aaaaaaaaaaaaaaaaa";
	char *dest;

	printf("texto a ser substituido %s\n", destino);
	printf("texto a ser copiado %s\n", src);

	dest = ft_strcpy(destino, src);

	printf("texto copiado %s", dest);

}
