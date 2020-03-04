/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 23:35:11 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/06 20:38:36 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char str1[] = "em osasco, onde as sombras se deitam";
	char str2[] = "em osasco, onde as sombras se deitam";

	printf("Funcao criada: %d\n", ft_strcmp(str1, str2));
	printf("Funcao original: %d\n", strcmp(str1, str2));
	return (0);
}
