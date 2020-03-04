/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 04:16:11 by anolivei          #+#    #+#             */
/*   Updated: 2019/12/11 18:47:41 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		g_t_linha;
int		g_t_colunas;
int		g_matriz[500000][500000];
char	g_c_obs;
char	g_c_vazio;
char	g_c_cheio;
int		g_erro;
int		g_max_colunas;
int		g_t_linhas;
void	ler_arquivo(int fd, int p, int ret, int i);
void	ler_cabecalho(char *linha, int i);
int		abre_arquivo(char *nome_arquivo);
int		conta_colunas(char *linha);
void	gerar_matriz(char *linha, int i);
void	calcula(int i, int j);
void	localiza(void);
void	imprime_final(int posic_i, int posic_j, int maior);
void	escreve(char *frase);
void	entrada(int g_t_linha, int finaliza, int i, char c);
void	executa(char *nome_arquivo);
#endif
