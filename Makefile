# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpires-c <rpires-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 14:51:15 by jperpect          #+#    #+#              #
#    Updated: 2024/05/27 10:50:33 by rpires-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SOURCES = ft_printf.c ft_printp.c ft_putnbr_base.c \
ft_putstrr.c ft_putcharr.c libft/ft_strlen.c\

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
	yes y | python3 -m c_formatter_42 -c $(SOURCES)