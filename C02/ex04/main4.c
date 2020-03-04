/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 23:49:26 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/29 00:45:55 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char text_upper [] = "MANODOCEU";
	char text_wrong [] = "ManoDoCeu";
	int ret;

	printf("texto: %s\n", text_upper);
	ret = ft_str_is_lowercase(text_upper);
	printf("%d\n", ret);

	printf("texto: %s\n", text_wrong);
	ret = ft_str_is_lowercase(text_wrong);
	printf("%d\n", ret);
}
