# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 18:23:27 by kscordel          #+#    #+#              #
#    Updated: 2023/11/13 18:23:28 by kscordel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = animals

SRC = Animal.cpp Brain.cpp Dog.cpp Cat.cpp main.cpp 

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
