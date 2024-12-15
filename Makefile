# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abollen <abollen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 13:17:19 by abollen           #+#    #+#              #
#    Updated: 2022/01/20 13:17:24 by abollen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#***** VARIABLES *****#

NAME = libftprintf.a
HEADER = includes/ft_printf.h

FILES =  ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_printf.c ft_putunsigned.c
OBJ = ${addprefix ${OBJ_DIR}/,${FILES:.c=.o}}

SRC_DIR = src
OBJ_DIR = obj

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

#***** RULES *****#

all: ${OBJ_DIR} ${NAME}

${OBJ_DIR}/%.o: ${SRC_DIR}/%.c ${HEADER}
	@${CC} ${CFLAGS} -c $< -o $@
	@echo "\033[92m[BUILD]\033[97m $@"

${NAME}: ${OBJ}
	@ar rcs ${NAME} ${OBJ}
	@echo "\033[92m[BUILD]\033[97m ${NAME}"

${OBJ_DIR} :
	@mkdir ${OBJ_DIR}
	@echo "\033[92m[BUILD] \033[0m${OBJ_DIR} folder"

clean:
	@rm -rf ${OBJ_DIR}
	@echo "\033[93m[CLEANED] \033[0m${OBJ_DIR} folder"

fclean: clean
	@rm -rf ${NAME}
	@echo "\033[93m[CLEANED] \033[0m${NAME}"

re: fclean all

.PHONY: all clean fclean re