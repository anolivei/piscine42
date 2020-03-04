/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:45:35 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/27 20:09:36 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int tamanho;
	char *str;

	str = "mano do ceu!";
	tamanho = ft_strlen(str);
	
	printf("o tamanho é %d", tamanho);
}
