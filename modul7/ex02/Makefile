# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 14:46:53 by kscordel          #+#    #+#              #
#    Updated: 2024/02/10 14:46:57 by kscordel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
CXXFLAGS = $(FLAGS) -MMD
RM = rm -rf

NAME = Test

SRC = main.cpp


SRC_DIR = ./
SRCS = $(addprefix $(SRC_DIR), $(SRC))
OBJ_DIR = obj/
OBJS = $(addprefix $(OBJ_DIR), $(notdir $(SRCS:.cpp=.o)))
DEPS = $(addprefix $(OBJ_DIR), $(notdir $(SRCS:.cpp=.d)))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

-include $(DEPS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re