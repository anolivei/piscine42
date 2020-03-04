/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:32:39 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/03 15:58:58 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	caps(int size, char *str);

char	*ft_strcapitalize(char *str)
{
	int size;
	int i;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	i = 0;
	while (i < size)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	caps(size, str);
	return (str);
}

void	caps(int size, char *str)
{
	int i;
	int j;

	i = 0;
	j = i - 1;
	while (i < size)
	{
		if ((str[j] < '0') || (str[j] > '9' && str[j] < 'A'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		if ((str[j] > 'Z' && str[j] < 'a') || (str[j] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
		j++;
	}
}
