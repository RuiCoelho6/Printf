/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpires-c <rpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:10:53 by rpires-c          #+#    #+#             */
/*   Updated: 2024/05/22 15:27:32 by rpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *str, ...);

static int	identifier(char id, va_list args)
{
	if (id == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (id == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (id == 'p')
		return (ft_printpointer(va_arg(args, unsigned long)));
	else if (id == 'd')
		return (ft_putnbr_base(va_arg(args, int), "0123456789", 0));
	else if (id == 'i')
		return (ft_putnbr_base(va_arg(args, int), "0123456789", 0));
	else if (id == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789", 1));
	else if (id == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned), "0123456789abcdef", 0));
	else if (id == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned), "0123456789ABCDEF", 0));
	else if (id == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		percentagens_econtradas;
	int		cont;
	va_list	args;

	percentagens_econtradas = 0;
	cont = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			percentagens_econtradas = identifier(str[i+1], args);
			cont += 2;
			if ((int)ft_strlen(str) < i + 2)
				break ;
			i += 2;
		}
		else
			ft_putchar_fd(str[i++], 1);
	}
	va_end(args);
	return (i + percentagens_econtradas - cont);
}

int main ()
{
	int a = ft_printf("%s t", "teste1", "teste2");
 	int b = printf("t %s", "teste1", "teste2");
	printf("size %d size origin %d", a, b);
	return (0);
}