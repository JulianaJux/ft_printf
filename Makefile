# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:49:25 by jde-alen          #+#    #+#              #
#    Updated: 2021/10/30 19:22:50 by jde-alen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

FILES = ft_print.c \
ft_utils_libft.c \
ft_utils_print.c \

OBJECTS = $(FILES:.c=.o)
RM = rm -f
AR	= ar rcs

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)
	
$(OBJECTS): $(FILES)
	$(CC) $(FLAGS) -c $(FILES)

clean:
	$(RM) $(OBJECTS) $(OBJECTS_B) 

fclean: clean
	$(RM) $(NAME)

re: fclean all 

.PHONY: all clean fclean re 