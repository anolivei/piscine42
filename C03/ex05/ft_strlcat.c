/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 15:32:47 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/09 18:38:18 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int count_d;
	unsigned int count_s;
	unsigned int sum;
	unsigned int put;

	count_d = 0;
	count_s = 0;
	put = 0;
	while (dest[count_d] != '\0')
		count_d++;
	while (src[count_s] != '\0')
		count_s++;
	if (size > count_d)
		sum = count_d + count_s;
	else
		sum = size + count_s;
	while (src[put] != '\0' && count_d < (size - 1) && size > 0)
	{
		dest[count_d] = src[put];
		count_d++;
		put++;
	}
	dest[count_d] = '\0';
	return (sum);
}
