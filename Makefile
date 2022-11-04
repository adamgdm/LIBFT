# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 00:57:57 by agoujdam          #+#    #+#              #
#    Updated: 2022/11/03 15:48:18 by agoujdam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_strtrim.c ft_strjoin.c ft_itoa.c ft_atoi.c ft_bzero.c ft_calloc.c \
	  ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	  ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	  ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
	  ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	  ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
	  ft_tolower.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	  ft_putnbr_fd.c

LIB = libft.h

ADF = libft.h.gch

bonus = *_bonus.c

BONUS_OBJ = $(bonus:.c=.o)

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

CC = cc

NAME = libft.a

all : $(NAME) 
	
$(NAME) : $(SRC)
	@echo "Creating \"libft.a\""
	@$(CC) $(CFLAGS) $(SRC) $(LIB) -c 
	@ar -rc $(NAME) $(OBJ)
	@echo "Creation of the Library: SUCCESSFUL"

bonus : $(bonus)
	@echo "Creating \"libft.a\""
	@$(CC) $(CFLAGS) $(bonus) $(LIB) -c 
	@ar -rc $(NAME) $(BONUS_OBJ)
	@echo "Creation of the Library: SUCCESSFUL"

clean :
	@echo "Deleting object files"
	rm -rf *.o $(ADF)
	@echo "Deletion of object files: SUCCESSFUL"

fclean:
	@echo "Deleting Library and object files"
	@rm -rf *.o $(ADF) libft.a
	@echo "Deletion of library and object files: SUCCESSFUL"

re: fclean all

.PHONY : all clean fclean re bonus
