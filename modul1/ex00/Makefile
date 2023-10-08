# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kscordel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:37:42 by kscordel          #+#    #+#              #
#    Updated: 2023/09/05 16:41:30 by kscordel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombie

SRC = main Zombie newZombie randomChump


OBJ = $(addsuffix .o, ${SRC})

all:	$(NAME)

%.o:%.c
	$(CC) -c $(FLAGS) $< -o $@

$(NAME):	${OBJ}
		${CC} ${CFAGS} ${OBJ} -o ${NAME}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all


.PHONY:		all clean fclean re
