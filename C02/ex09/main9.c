/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:33:21 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/29 20:26:00 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char text_mixed	[] = "nunca maIs,eu+voU/dorMir;nuNca 42mAis?eu!vou dormIr";
	char *ret;

	printf("texto original: %s\n", text_mixed);
	ret = ft_strcapitalize(text_mixed);
	printf("texto strcapitalize: %s\n", ret);
}
