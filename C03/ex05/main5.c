/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 05:19:58 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/09 18:45:05 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src1[] = "o que";
	char dest1[12] = "esta errado";
	char src2[] = "o que";
	char dest2[12] = "esta errado";
	int size;
	
	size = '\0';
	printf("Funcao criada: %u\n", ft_strlcat(dest1, src1, size));
	printf("Funcao criada: %s\n", dest1);
	printf("Funcao original: %lu\n", strlcat(dest2, src2, size));
	printf("Funcao original: %s\n", dest2);

	return (0);
}
