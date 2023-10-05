# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:37:42 by kscordel          #+#    #+#              #
#    Updated: 2023/10/05 18:28:57 by kscordel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3
NAME = repertoir

SRC = phone Contact PhoneBook

INCLUDE = -I.

OBJ = $(addsuffix .o, ${SRC})

all:	$(NAME)

%.o:%.c
	$(CC) -c $(FLAGS) $< -o $@

$(NAME):	${OBJ}
		${CC} ${CFAGS} ${INCLUDE} ${OBJ} -o ${NAME}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all


.PHONY:		all clean fclean re
