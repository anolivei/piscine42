/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 18:50:08 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/06 20:08:36 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char str[] = "You know nothing John Snow";
	printf("Size: %d\n", ft_strlen(str));
	return (0);
}
