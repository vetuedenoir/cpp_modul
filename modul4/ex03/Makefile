CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -g3

NAME = source

SRC = AMateria.cpp Ice.cpp Cure.cpp Character.cpp\
		MateriaSource.cpp main.cpp

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
