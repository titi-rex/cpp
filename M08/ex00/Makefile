# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlegrand <tlegrand@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 11:48:58 by tlegrand          #+#    #+#              #
#    Updated: 2023/11/07 10:56:07 by tlegrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	easyfind


HDR		=	easyfind.hpp

SRC		=	main.cpp

OBJ_DIR	=	.obj/
OBJ_LST	=	${SRC:.cpp=.o}
OBJ		=	$(addprefix $(OBJ_DIR), $(OBJ_LST))

CC		=	c++
RM		=	rm -rf

CFLAGS	=	-Wall -Werror -Wextra -std=c++98



.PHONY	:	all clean fclean re

all 	:	${NAME}

clean	:
		$(RM) $(OBJ_DIR)

fclean	:	clean
		$(RM) ${NAME}

re		:	fclean all
		

${NAME}	:	$(OBJ_DIR) ${OBJ} 
		$(CC) ${CFLAGS} $(OBJ) -o $@

$(OBJ_DIR)%.o	:	%.cpp $(HDR)
		${CC} ${CFLAGS} -c $< -o $@

$(OBJ_DIR)	:
			@mkdir -p $(OBJ_DIR)