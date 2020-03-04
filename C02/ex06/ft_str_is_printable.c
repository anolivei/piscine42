/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:32:39 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/29 17:32:43 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int size;
	int ret;
	int i;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	i = 0;
	ret = 1;
	while (i < size && ret == 1)
	{
		if (str[i] > 31 && str[i] != 127)
			ret = 1;
		else
			ret = 0;
		i++;
	}
	return (ret);
}
