# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 23:28:24 by robindehouc       #+#    #+#              #
#    Updated: 2022/02/24 12:42:04 by robindehouc      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER 			= libft/libft.h ft_printf.h

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

SRCS			=	libft/ft_isalnum.c libft/ft_isprint.c libft/ft_memcmp.c  libft/ft_putchar_fd.c libft/ft_split.c \
					libft/ft_strlcat.c libft/ft_strncmp.c libft/ft_substr.c libft/ft_atoi.c libft/ft_isalpha.c \
					libft/ft_itoa.c libft/ft_memcpy.c  libft/ft_putendl_fd.c libft/ft_strchr.c  libft/ft_strlcpy.c \
					libft/ft_strnstr.c libft/ft_tolower.c libft/ft_bzero.c  libft/ft_isascii.c \
					libft/ft_memmove.c libft/ft_putnbr_fd.c libft/ft_strdup.c libft/ft_strlen.c libft/ft_strrchr.c \
					libft/ft_toupper.c libft/ft_calloc.c libft/ft_isdigit.c libft/ft_memchr.c libft/ft_memset.c  \
					libft/ft_putstr_fd.c libft/ft_strjoin.c libft/ft_strmapi.c libft/ft_strtrim.c libft/ft_striteri.c \
					ft_print_ptr.c ft_print_unsigned.c ft_printf_utils.c ft_printnbr.c ft_printf.c

OBJS			= $(SRCS:.c=.o)

%.o: %.c $(HEADER) 
	$(CC) $(CFLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re