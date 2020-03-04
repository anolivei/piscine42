/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 00:25:04 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/24 17:37:45 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letra);
void	topline(int x);
void	midline(int x, int y);
void	botline(int x);

int g_countcol;
int g_countrow;
char g_tl = '/';
char g_tr = 92;
char g_bl = 92;
char g_br = '/';
char g_sdtb = '*';
char g_sdlr = '*';

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		topline(x);
		midline(x, y);
		if (y >= 2)
			botline(x);
	}
}

void	topline(int x)
{
	ft_putchar(g_tl);
	g_countcol = x - 2;
	while (g_countcol > 0)
	{
		ft_putchar(g_sdtb);
		g_countcol--;
	}
	if (x >= 2)
		ft_putchar(g_tr);
	ft_putchar('\n');
}

void	midline(int x, int y)
{
	g_countrow = y - 2;
	while (g_countrow > 0)
	{
		ft_putchar(g_sdlr);
		g_countcol = x - 2;
		while (g_countcol > 0)
		{
			ft_putchar(' ');
			g_countcol--;
		}
		if (x >= 2)
			ft_putchar(g_sdlr);
		ft_putchar('\n');
		g_countrow--;
	}
}

void	botline(int x)
{
	g_countcol = x - 2;
	ft_putchar(g_bl);
	while (g_countcol > 0)
	{
		ft_putchar(g_sdtb);
		g_countcol--;
	}
	if (x >= 2)
		ft_putchar(g_br);
	ft_putchar('\n');
}
