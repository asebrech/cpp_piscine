# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 14:06:26 by asebrech          #+#    #+#              #
#    Updated: 2022/01/17 14:06:29 by asebrech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.c=.o)

%.o : %.c
	@$(CXX) $(CXXFLAGS) -c $@ $<

all : $(NAME)

NAME : $(OBJ)
	@$(CXX) $(CXXFLAGS) -c $@ $<

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf $(NAME)

.PHONY : clean fclean
