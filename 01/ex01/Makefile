# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 00:11:18 by hyko              #+#    #+#              #
#    Updated: 2022/11/12 00:11:34 by hyko             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = main.cpp Zombie.cpp zombieHorde.cpp
	
OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
