# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 18:14:08 by kscordel          #+#    #+#              #
#    Updated: 2023/11/13 18:14:09 by kscordel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = clapeur

SRC = ClapTrap.cpp main.cpp

INCLUDE =  -I.

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	${OBJ}
		${CXX} ${CXXFLAGS} $(INCLUDE) ${OBJ} -o ${NAME}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
