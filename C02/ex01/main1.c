/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:25:26 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/28 19:30:20 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char *dest;
	char src[] = "1234567890123456789";
	unsigned int n = 8;
	char destino[] = "aaaaaaaaaaaaaa";

	printf("origem %s\n", src);
	dest = ft_strncpy(destino, src, n);
	printf("destino %s\n", dest);
}
