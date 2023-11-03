CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = harl

SRC = main Harl

INCLUDE =  -I.

OBJ = $(addsuffix .o, ${SRC})

all:	$(NAME)

$(NAME):	${OBJ}
		${CXX} ${CXXFLAGS} $(INCLUDE) ${OBJ} -o ${NAME}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all


.PHONY:		all clean fclean re
