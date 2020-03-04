/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 22:56:19 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/28 23:32:14 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int	main(void)
{
	char numero[] = "314159265359";
	char errado[] = "12feijaocomarroz";
	int ret;

	printf("o número é: %s\n", numero);
	ret = ft_str_is_numeric(numero);
	printf("%d\n", ret);

	printf("o número é: %s\n", errado);
	ret = ft_str_is_numeric(errado);
	printf("%d", ret);
}
