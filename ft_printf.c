/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpires-c <rpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:10:53 by rpires-c          #+#    #+#             */
/*   Updated: 2024/05/27 14:43:35 by rpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	identifier(char id,va_list args)
{
	if(id == 'c')
		return(ft_putchar( va_arg(args, int )));
	else if (id == 's')
		return(ft_putstrlen(va_arg(args, char *)));
	else if (id == 'p')
		return(ft_print_pointer(va_arg(args, unsigned long)));
	else if (id == 'd')
	 	return(ft_putnbr_base(va_arg(args, int), "0123456789", 0));
	else if (id == 'i')
		return(ft_putnbr_base(va_arg(args, int), "0123456789", 0));
	else if (id == 'u')
	 return(ft_putnbr_base(va_arg(args, unsigned int), "0123456789", 1));
	else if (id == 'x')
	 return(ft_putnbr_base(va_arg(args, unsigned), "0123456789abcdef", 0));
	else if (id == 'X')
	 return(ft_putnbr_base(va_arg(args, unsigned), "0123456789ABCDEF", 0));
	else if (id == '%')
	 return(ft_putchar('%'));
	return(0);
}


int	ft_printf(const char *str, ...)
{	
	static int	i;
	static int	num_percentagens;
	static int	cont;
	
	va_list args;
	va_start(args, str);
	while(str[i] != '\0')
	{
		if(str[i] == '%')
		{
			num_percentagens += identifier(str[i + 1], args);
			i += 2;
			cont += 2;
		}
		else
			ft_putchar(str[i++]);
	}
	va_end(args);
	return (i + num_percentagens - cont);
}

/* int main ()
{
	void *ptr = (char *)0x7ffeefbff710;
	
	int a = ft_printf(" %c%d \n",'a',-1);
	int b = printf(" %c%d \n",'a',-1);
	printf("%d a,%d b ",a,b);
	
} */