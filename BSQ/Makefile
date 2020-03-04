# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpereira <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 20:53:12 by cpereira          #+#    #+#              #
#    Updated: 2019/12/11 16:11:29 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNCTIONS = functions/abre_arquivo.c functions/calcula.c functions/conta_colunas.c functions/escreve.c functions/gerar_matriz.c functions/imprime_final.c functions/ler_arquivo.c functions/ler_cabecalho.c functions/localiza.c functions/ler_entrada.c functions/executa.c
NAME = bsq
MAIN = main.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -o $(NAME) $(FUNCTIONS) $(MAIN)

fclean:
	@/bin/rm -f $(NAME)
