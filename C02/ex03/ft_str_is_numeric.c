/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 22:31:35 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/28 23:23:55 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int ret;
	int size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	i = 0;
	ret = 1;
	while (i < size && ret == 1)
	{
		if (str[i] >= 48 && str[i] <= 57)
			ret = 1;
		else
			ret = 0;
		i++;
	}
	return (ret);
}
