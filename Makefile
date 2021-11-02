# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:49:25 by jde-alen          #+#    #+#              #
#    Updated: 2021/11/02 18:19:33 by jde-alen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

FILES = ft_printf.c \
ft_utils_print.c \

OBJECTS = $(FILES:.c=.o)
RM = rm -f
AR	= ar rcs
INCLUDES = ft_printf.h

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)
	
$(OBJECTS): $(FILES) $(INCLUDES)
	$(CC) $(FLAGS) -c $(FILES)

clean:
	$(RM) $(OBJECTS) $(OBJECTS_B) 

fclean: clean
	$(RM) $(NAME)

re: fclean all 

.PHONY: all clean fclean re 