/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 08:49:33 by ecerquei          #+#    #+#             */
/*   Updated: 2019/11/29 07:35:25 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
	char test[40] = "a";
	char test2[40] = "z";

	printf("Comparer \"a\" to \"z\"\n");
	printf("ft_strcmp = %d\n", ft_strncmp(test, test2, 1));
	printf("strcmp    = %d\n", strncmp(test, test2, 1));
	printf("\n");
	printf("Comparer \"Zeta\" to \"Zeza\"\n");
	printf("ft_strcmp = %d\n", ft_strncmp("Zeza", "Zera", 2));
	printf("strcmp    = %d\n", strncmp("Zeza", "Zera", 2));
}
