/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:47:34 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/04 20:06:23 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char character)
{
	char	hex[2];
	int		i;
	char	chr;

	hex[0] = '0';
	hex[1] = '0';
	i = 1;
	while (i >= 0)
	{
		chr = character % 16;
		if (chr < 10)
			hex[i] = chr + '0';
		else
			hex[i] = chr + 87;
		character = character / 16;
		i--;
	}
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while ((unsigned char)str[i] != '\0')
	{
		if ((unsigned char)str[i] < 32 || (unsigned char)str[i] > 126)
		{
			write(1, "\\", 1);
			print_hex((unsigned char)str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
