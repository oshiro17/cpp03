# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panti <panti@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 11:10:16 by panti             #+#    #+#              #
#    Updated: 2023/11/12 22:12:28 by panti            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out
	
CC		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -MMD -MP
RM		= rm -rf
FILES	= main ClapTrap ScavTrap
OBJS	= $(FILES:=.o)
DEPS	= $(FILES:=.d)
.PHONY: all clean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)