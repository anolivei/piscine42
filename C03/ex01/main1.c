/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:58:48 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/08 00:02:02 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char str1[] = "And I'm rhaking like a leaf";
	char str2[] = "And I'm shaking like a leaf";
	int n;
	
	n = 27;	
	printf("Funcao criada: %d\n", ft_strncmp(str1, str2, n));
	printf("Funcao original: %d\n", strncmp(str1, str2, n));
	return (0);
}
