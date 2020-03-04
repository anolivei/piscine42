/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:47:48 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/03 16:58:27 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_putstr_non_printable(char *str);

int	main(void)
{
	char *str;
	char texto[] = "Vida\nloÇa\be ç  prospera\a";

	str = texto;
	ft_putstr_non_printable(str);
}
