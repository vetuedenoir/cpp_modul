# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 18:46:17 by kscordel          #+#    #+#              #
#    Updated: 2024/02/26 18:46:18 by kscordel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
CXXFLAGS = $(FLAGS) -MMD
RM = rm -rf

NAME = btc

SRC = main.cpp BitcoinExchange.cpp


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