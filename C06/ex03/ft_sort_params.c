/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:31:37 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/11 00:48:50 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **s1, char **s2);
void	ft_putstr(char *str);

int		main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
					ft_swap(&argv[i], &argv[j]);
				j++;
			}
			i++;
		}
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	s1_u;
	unsigned char	s2_u;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		s1_u = (unsigned char)s1[i];
		s2_u = (unsigned char)s2[i];
		if (s1_u != s2_u)
		{
			return (s1_u - s2_u);
		}
		i++;
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char *aux;

	aux = *s1;
	*s1 = *s2;
	*s2 = aux;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
