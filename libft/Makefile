# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 20:45:59 by argonthi          #+#    #+#              #
#    Updated: 2018/12/03 23:30:35 by argonthi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
RM			= rm -rf
NAME		= libft.a
CFLAGS		= -Wall -Wextra -Werror

INCLUDE		= -I .

IS			= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
MEMORY		= ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memcpy.c ft_memcmp.c\
			  ft_memchr.c ft_memdel.c ft_memmove.c ft_memset.c
NUMBER		= ft_atoi.c ft_itoa.c
PRINT		= ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c ft_putendl.c\
			  ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c ft_putstr.c
STRING		= ft_strcat.c ft_strccat.c ft_strchr.c ft_strcjoin.c ft_strclr.c\
			  ft_strcmp.c ft_strccpy.c ft_strcpy.c ft_strdel.c ft_strdup.c\
			  ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c\
			  ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c\
			  ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c\
			  ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c
CHAR		= ft_tolower.c ft_toupper.c

FUNCTIONS	= $(IS) $(STRUCT) $(MEMORY) $(NUMBER) $(PRINT) $(STRING) $(CHAR)
OBJECTS		= $(FUNCTIONS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
