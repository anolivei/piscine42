/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 04:15:32 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/08 21:38:03 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int n;
	unsigned int p10;
	unsigned int aux;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (-1) * nb;
	}
	aux = nb;
	p10 = 1;
	while (aux >= 10)
	{
		aux = aux / 10;
		p10 = p10 * 10;
	}
	while (p10 >= 1)
	{
		n = (nb / p10);
		nb = (nb % p10);
		n = n + 48;
		write(1, &n, 1);
		p10 = p10 / 10;
	}
}
