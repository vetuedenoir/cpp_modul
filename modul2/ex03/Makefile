CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = triangulation

SRC = main Fixed Point bsp


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
