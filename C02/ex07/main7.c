/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:33:21 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/29 18:10:02 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char text_mixed	[] = "AbCdEFGhIjklmNopQRStuVxWyZ";
	char text_lowercase [] = "abcdefghi";
	char *ret;

	printf("texto original: %s\n", text_mixed);
	ret = ft_strupcase(text_mixed);
	printf("texto uppercase: %s\n", ret);

	printf("texto original: %s\n", text_lowercase);
	ret = ft_strupcase(text_lowercase);
	printf("texto uppercase: %s\n", ret);
}
