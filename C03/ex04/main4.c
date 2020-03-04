/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:06:37 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/08 03:59:25 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "flango flito deu tig";
	char to_find[] = "";
	char str2[] = "flango flito deu tig";
	char to_find2[] = "";
	printf("\nstr: %s\n\n", str);
	printf("to_find: %s\n", to_find);
	printf("Funcao criada: %s\n", ft_strstr(str, to_find));
	printf("Funcao original: %s\n\n", strstr(str2, to_find2));

	char str3[] = "hoje e um \anovo dia de um novo temp";
	char to_find3[] = "\0";
	char str4[] = "hoje e um \anovo dia de um novo temp";
	char to_find4[] = "\0";
	printf("to_find: %s\n", to_find3);
	printf("Funcao criada: %s\n", ft_strstr(str3, to_find3));
	printf("Funcao original: %s\n\n", strstr(str4, to_find4));
	
	char str5[] = "flango flito deu tig";
	char to_find5[] = "xo flango";
	char str6[] = "flango flito deu tig";
	char to_find6[] = "xo flango";
	printf("to_find: %s\n", to_find5);
	printf("Funcao criada: %s\n", ft_strstr(str5, to_find5));
	printf("Funcao original: %s\n", strstr(str6, to_find6));

	return (0);
}
