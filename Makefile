# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: puttasa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 17:43:45 by puttasa           #+#    #+#              #
#    Updated: 2022/10/12 19:35:47 by puttasa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c

SRCBS =

OBJS = $(SRCS:.c=.o)

OBJSB = $(SRCSB:.c=.o)

all : $(NAME)

.c.o :
	echo "\033[93mCompiling $< to $@...\033[0m"	
	gcc $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	echo "\033[93mMaking .a file...\033[0m"
	ar -rcs $(NAME) $(OBJS)

bonus : $(NAME) $(OBJSB)
		echo "\033[93mMaking bonus\033[0m"
		ar -rcs $(NAME) $(OBJSB)

clean :
	echo "\033[93mCleaning objects...\033[0m"
	rm -f $(OBJS) $(OBJSB)

fclean : clean
	rm -f $(NAME) $(bonus)

re : fclean all

.PHONY : all clean fclean re bonus
