/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 06:47:32 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/12 19:27:28 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	unsigned int fat;
	
	if (nb > 12)
		return (0);
	if (nb <= 1)
		return (1);
	nb = nb - 1;
	fat = 1;
	while (nb > 0)
	{
		fat = fat * nb;
		nb--;
	}
}
