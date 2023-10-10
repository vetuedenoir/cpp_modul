CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = clapeur

SRC = ClapTrap.cpp main.cpp

INCLUDE =  -I.

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	${OBJ}
		${CC} ${CFAGS} $(INCLUDE) ${OBJ} -o ${NAME}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all


.PHONY:		all clean fclean re
