/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:24:30 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/12 14:36:07 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		erro_base(char *base);
int		size_base(char *base);
void	change_base(int nbr, char *base, unsigned int size);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int size;

	if (erro_base(base) == 1)
	{
		size = size_base(base);
		change_base(nbr, base, size);
	}
}

int		erro_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		if (base[i] == '-' || base[i] == '+')
			while (base[j] != '\0')
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int		size_base(char *base)
{
	int size;

	size = 0;
	while (base[size] != '\0')
		size++;
	return (size);
}

void	change_base(int nbr, char *base, unsigned int size)
{
	unsigned int	n;
	int				mod;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
	{
		n = nbr;
	}
	if (n >= size)
		change_base(n / size, base, size);
	mod = n % size;
	write(1, &base[mod], 1);
}
