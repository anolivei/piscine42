/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:40:04 by ecerquei          #+#    #+#             */
/*   Updated: 2019/11/29 01:01:26 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[40] = "Eric ";
	char dest2[40] = "Eric ";
	char src[40] = "Cerqueira Leao";

	printf("%u\n", ft_strlcat(dest, src, 15));
	printf("%s\n", dest);
	printf("%lu\n", strlcat(dest2, src, 15));
	printf("%s\n", dest2);
}
