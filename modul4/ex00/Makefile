CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = animals

SRC = Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp 

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
