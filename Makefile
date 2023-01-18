# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yiwong <yiwong@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 14:24:09 by yiwong            #+#    #+#              #
#    Updated: 2022/12/17 22:27:56 by yiwong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

AR = ar rcs

DEPS = libft.h

SRC = ft_is*.c \
		ft_is*.c \
		ft_to*.c \
		ft_str*.c \
		ft_mem*.c \
		ft_put*.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_substr.c \
		ft_split.c

OBJ = $(SRC:.c=.o)

SRC_BONUS = ft_lst*.c

OBJ_BONUS = $(BONUS_SRC:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) -c $(SRC)
		$(AR) $(NAME) $(OBJ)

bonus : $(NAME) $(OBJ) $(OBJ_BONUS)
		$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

clean :
		 rm -f $(OBJ)

fclean : clean
		 rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
