/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 00:25:04 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/24 17:11:21 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letra); //diz que vamos usar essa função que está descrita em outro arquivo que foi compilado junto a esse

void	print_primeira_linha(int x) //criando a função que vai imprimir a primeira linha
{
	int cont_coluna; //criando a variável que vamos utilizar para contar a quantidade de *

	ft_putchar('/'); //imprime o primeiro caracter (no caso a /, no canto superior esquerdo
	cont_coluna = x - 2; //a variável recebe o valor do numero total de colunas menos dois (valor total de * a serem impressos)
	while (cont_coluna > 0) // while para rodar enquanto a variavel for maior que zero, quado for igual a zero para
	{
		ft_putchar('*'); // imprime *
		cont_coluna--; // tira um do valor da variavel (cont_coluna = cont_coluna - um)
	}
	if (x >= 2) // vai imprimir essa linha somente se o numero de colunas for maior ou igual a dois
		ft_putchar(92); // imprime barra ao contrario, ultimo caracter da primeira linha, no canto superior direito
	ft_putchar('\n'); // da enter, pula linha para imprimir a proxima linha embaixo
}

void	print_meio(int x, int y) // criando a funçao que vai imprimir as linhas do meio
{
	int cont_linha; // criando a variavel que vamos utilizar para contar a quantidade de * na vertical
	int cont_coluna; // criando a variavel que vamos utilizar para contar a quantidade de espaços vazios na horizontal

	cont_linha = y - 2; // a variavel recebe o valor do numero de linhas menos dois (valor total de * na vertical)
	while (cont_linha > 0) // while para rodar enquanto a variavel for maior que zero, quando for zero para
	{
		ft_putchar('*'); // imprime *
		cont_coluna = x - 2; // a variavel recebe o valor do numero de colunas menos dois (valor total de vazios na horizontal)
		while (cont_coluna > 0) // while para rodar enquanto a variavel for maior que zero, quando for zero para
		{
			ft_putchar(' '); // imprime espaço vazio
			cont_coluna--; // tira um do valor da variavel (cont_coluna = cont_coluna - um)
		}
	if (x >= 2) // para imprimir outra estrela somente quando tem duas coluna  ou mais 
			ft_putchar('*'); // imprime *
		ft_putchar('\n'); // pula uma linha
		cont_linha--; // tira um do valor da variavel (cont_linha = cont_lina - um)
	}
}

void	print_ultima_linha(int x) // cria funçao que imprime a ultima linha
{
	int cont_coluna; // criando a variavel que vamos utilizar para contar a quantidade de * na horizontal

	cont_coluna = x - 2; // a variavel recebe o valor do total de colunas menos dois (valor total de * a serem impressos)
	ft_putchar(92); // imprime barra ao contrario
	while (cont_coluna > 0) // while para rodar enquanto a variavel for maior que zero, quando for zero para
	{
		ft_putchar('*');// imprime *
		cont_coluna--;// tira um do valor da variavel (cont_coluna = cont_coluna menos um)
	}
	if (x >= 2) // so continua quando tem mais de duas colunas
		ft_putchar('/'); // imprime /
	ft_putchar('\n'); //pula linha
}

void	rush(int x, int y) // cria funçao rush que coordena as funçoes anteriores
{
	if (x >= 1 && y >= 1) // so funciona para valores maiores ou iguais a um para coluna e linha
	{
		print_primeira_linha(x); //imprime a primeira linha - a propria funçao barra a impressao de mais colunas se x for um
		print_meio(x, y); // imprime a segunda linha - a propria funçao barra a impressoa de mais linhas e colunas se x ou y forem um
		if (y >= 2) //se houver mais que duas linhas
			print_ultima_linha(x); // imprime a ultima linha
	}
}
