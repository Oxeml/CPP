# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/03 13:32:27 by oemelyan          #+#    #+#              #
#    Updated: 2024/06/24 14:22:55 by oemelyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS	= -c -g -Wall -Werror -Wextra -std=c++98 #-fsanitize=address
NAME	= phonebook
SRCS	= PhoneBook.cpp Contact.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)
CPP = c++

HEADERS = PhoneBook.hpp\
		  Contact.hpp

#SAN_LDFLAG = -L /Users/oemelyan/Documents/projects/LeakSanitizer -llsan -lc++ -Wno-gnu-include-next -I /Users/oemelyan/Documents/projects/LeakSanitizer

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CPP) $(OBJS) -o $(NAME) $(SAN_LDFLAG)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

