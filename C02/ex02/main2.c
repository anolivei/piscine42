/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 19:52:06 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/28 22:22:49 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char texto[] = "caracarambacaracaraooo";
	int ret;

	printf("o texto é: %s\n", texto);
	ret = ft_str_is_alpha(texto);
	printf("%d", ret);
}
