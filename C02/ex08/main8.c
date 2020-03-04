/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:33:21 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/29 19:00:30 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char text_mixed	[] = "AbCdEFGhIjklmNopQRStuVxWyZ";
	char text_uppercase [] = "ABCDEFGHIJKLMN";
	char *ret;

	printf("texto original: %s\n", text_mixed);
	ret = ft_strlowcase(text_mixed);
	printf("texto lowcase: %s\n", ret);

	printf("texto original: %s\n", text_uppercase);
	ret = ft_strlowcase(text_uppercase);
	printf("texto lowcase: %s\n", ret);
}
