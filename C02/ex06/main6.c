/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:33:21 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/29 17:33:49 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char text_print [] = "e nessa loucura de dizer que nao te quero";
	char text_no_print [] = "vou negando as aparencias \a";
	int ret;

	printf("texto printável: %s\n", text_print);
	ret = ft_str_is_printable(text_print);
	printf("deve ser 1: %d\n", ret);

	printf("texto não printável: %s\n", text_no_print);
	ret = ft_str_is_printable(text_no_print);
	printf("deve ser 0: %d\n", ret);	
}
