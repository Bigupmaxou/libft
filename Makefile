# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maxipeti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:33:41 by maxipeti          #+#    #+#              #
#    Updated: 2023/03/07 13:50:33 by maxipeti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = ft_isalpha.c\
        ft_isdigit.c\
	ft_isalnum.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstadd_back.c\
	ft_lstsize.c\
	ft_lstmap.c\
	ft_lstlast.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstiter.c

	
SRCS_BONUS = ft_lstnew.c\
	     ft_lstadd_front.c\
	     ft_lstadd_back.c\
	     ft_lstsize.c\
	     ft_lstmap.c\
	     ft_lstlast.c\
	     ft_lstdelone.c\
	     ft_lstclear.c\
	     ft_lstiter.c

OBJ = $(SRCS:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $@ $^
bonus  :  ${OBJ} ${OBJ_BONUS}
	ar rcs ${NAME} ${OBJ} ${OBJBONUS}

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)
	rm -rf $(OBJ_BONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
