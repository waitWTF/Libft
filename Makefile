# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thandel <thandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 12:48:36 by thandel           #+#    #+#              #
#    Updated: 2022/10/03 12:51:29 by thandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

CC = gcc

SOURCE = ft_*.clean

FLAGS = -Wall -Werror -Wextra

.PHONY = all clean re

all:
	$(CC) $(FLAGS) -o $(NAME) $(SOURCE)

clean:
	/bin/rm -rf *.o $(NAME)

re: clean all