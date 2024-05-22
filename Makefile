# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpires-c <rpires-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 14:51:15 by jperpect          #+#    #+#              #
#    Updated: 2024/05/22 14:59:47 by rpires-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SOURCES = ft_printf.c ft_printp.c ft_putnbr_base.c \
ft_putstr_fd.c ft_putchar_fd.c ft_strlen.c \
 

OBJECT = $(SOURCES:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECT)
	ar rcs $(NAME) $(OBJECT)

%.o:%.c ft_printf.h
	cc -c $(FLAGS) -o $@ $<  

clean:
	$(RM)  $(OBJECT)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

exec:
	cc -g $(SOURCES) -lbsd

norm: 
	python3 -m c_formatter_42 -c $(SOURCES)