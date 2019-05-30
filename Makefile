# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 11:38:04 by mnzolo            #+#    #+#              #
#    Updated: 2019/05/29 16:34:56 by mnzolo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isdigit.c	ft_putchar.c ft_striteri.c ft_strnstr.c ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strrchr.c ft_memalloc.c ft_strcat.c ft_strlcat.c ft_strstr.c ft_memccpy.c	ft_strchr.c ft_strlen.c ft_strsub.c ft_atoi.c ft_memchr.c ft_strcmp.c ft_strmap.c ft_tolower.c ft_bzero.c ft_memcmp.c ft_strcpy.c ft_strncat.c ft_toupper.c ft_isalnum.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_isalpha.c ft_memmove.c	ft_strequ.c	ft_strncpy.c ft_isascii.c ft_memset.c ft_striter.c ft_strnequ.c

OBJECTS = ft_atoi.o	ft_memcmp.o	ft_strdup.o	ft_strncpy.o ft_bzero.o ft_memcpy.o	ft_strequ.o	ft_strnequ.o ft_isalnum.o ft_memmove.o ft_striter.o	ft_strnstr.o ft_isalpha.o ft_memset.o ft_striteri.o ft_strrchr.o ft_isascii.o ft_putchar.o ft_strjoin.o	ft_strstr.o ft_isdigit.o ft_putchar_fd.o ft_strlcat.o ft_strsub.o ft_isprint.o ft_strcat.o ft_strlen.o ft_tolower.o ft_memalloc.o ft_strchr.o ft_strmap.o ft_toupper.o ft_memccpy.o	ft_strcmp.o	ft_strncat.o ft_memchr.o ft_strcpy.o ft_strncmp.o

flags = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : 
	gcc -c $(flags) $(SRCS)
	ar rc $(NAME) $(OBJECTS)

clean : 
	/bin/rm -f $(OBJECTS)

fclean : clean 
	/bin/rm -f $(NAME) $(OBJECTS)
	
re : fclean all
	gcc -c $(Flags) $(SRCS)
