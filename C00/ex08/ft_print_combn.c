/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 04:00:17 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/26 15:00:32 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

void	ft_print_combn(int n)
{
	if (n == 2)
	{
		int i;
		int j;
		i = 0;
		j = 1;
		while (i <= 9)
		{
			while (j <= 9)
			{
				ft_putchar(i);
				ft_putchar(j);
				j++;
			}
			i++;
			j = i + 1;
		}
	}
}	
