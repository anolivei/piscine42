/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 05:19:58 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/05 15:16:57 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char src1[] = "do ceu!";
	char dest1[12] = "Mano";
	char src2[] = "do ceu!";
	char dest2[12] = "Mano";

	printf("Funcao criada: %s\n", ft_strcat(dest1, src1));
	printf("Funcao original: %s\n", strcat(dest2, src2));
	return (0);
}
