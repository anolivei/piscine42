/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 23:49:01 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/02 21:32:34 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int size;
	int i;
	int ret;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	i = 0;
	ret = 1;
	while (i < size && ret == 1)
	{
		if (str[i] >= 97 && str[i] <= 122)
			ret = 1;
		else
			ret = 0;
		i++;
	}
	return (ret);
}
