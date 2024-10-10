# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 20:27:35 by hoskim            #+#    #+#              #
#    Updated: 2024/10/10 18:17:59 by hoskim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_memset.c ft_bzero.c ft_memcpy.c \
					ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
					ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
					ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
					ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
					ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c \
					ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
					ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c

OBJS			= $(SRCS:.c=.o)

BONUS 			= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
					ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
					ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= 	gcc
RM				= 	rm -f
CFLAGS			= 	-Wall -Wextra -Werror -I.

NAME			= 	libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
					$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(BONUS_OBJS)
					ar rcs $(NAME) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus