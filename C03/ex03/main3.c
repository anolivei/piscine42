/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 05:19:58 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/05 17:12:44 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char src1[] = "do ceu!";
	char dest1[12] = "Mano";
	char src2[] = "do ceu!";
	char dest2[12] = "Mano";
	int nb;
	
	nb = 2;
	printf("Funcao criada: %s\n", ft_strncat(dest1, src1, nb));
	printf("Funcao original: %s\n", strncat(dest2, src2, nb));
	return (0);
}
