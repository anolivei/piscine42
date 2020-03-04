/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 20:23:02 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/28 00:31:06 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int aux_tab;
	int i;

	size = size - 1;
	i = 0;
	while (i < size)
	{
		aux_tab = tab[i];
		tab[i] = tab[size];
		tab[size] = aux_tab;
		i++;
		size--;
	}
}
