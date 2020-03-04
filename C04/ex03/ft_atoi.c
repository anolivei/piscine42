/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 21:39:22 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/12 18:44:59 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c);

int	ft_atoi(char *str)
{
	int i;
	int count_minus;
	int n;

	i = 0;
	count_minus = 0;
	n = 0;
	while (str[i] != '\0' && is_space(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count_minus++;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + str[i] - '0';
		i++;
	}
	if (count_minus % 2 != 0)
		return (n = n * -1);
	else
		return (n);
}

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\r' ||
			c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}
