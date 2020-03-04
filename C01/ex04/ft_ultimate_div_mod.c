/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 17:19:30 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/27 18:37:01 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int armaz_quociente;
	int armaz_resto;

	armaz_quociente = *a / *b;
	armaz_resto = *a % *b;
	*a = armaz_quociente;
	*b = armaz_resto;
}
