CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = exec

SRC = main Fixed


OBJ = $(addsuffix .o, ${SRC})

all:	$(NAME)

$(NAME):	${OBJ}
		${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
