/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:08:39 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/08 17:14:06 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count_to_find;
	int	count_str;
	int aux;

	if (to_find[0] == '\0')
		return (str);
	count_str = 0;
	while (str[count_str] != '\0')
	{
		count_to_find = 0;
		if (str[count_str] == to_find[count_to_find])
		{
			aux = count_str;
			while (str[count_str] == to_find[count_to_find])
			{
				if (to_find[count_to_find + 1] == '\0')
					return (&str[aux]);
				count_str++;
				count_to_find++;
			}
			count_str = aux;
		}
		count_str++;
	}
	return (0);
}
