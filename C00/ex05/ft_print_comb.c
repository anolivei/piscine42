/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 05:03:24 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/26 14:54:29 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char i, char j, char k);

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				print(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i;
	}
}

void	print(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	if (i == '7' && j == '8' && k == '9')
		write(1, &k, 1);
	else
	{
		write(1, &k, 1);
		write(1, ", ", 2);
	}
}
