/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 19:51:56 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/28 22:24:43 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			ret = 1;
		else
			ret = 0;
		i++;
	}
	return (ret);
}
