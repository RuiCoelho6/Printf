/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpires-c <rpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:41:06 by rpires-c          #+#    #+#             */
/*   Updated: 2024/05/27 14:43:05 by rpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_print_pointer(unsigned long decimal)
{
	char		*base = "0123456789abcdef";
	static int	a;

	if (decimal == 0)
		return(ft_putstrlen("(nil)"));
	ft_putstrlen("0x");
	a = ft_putnbr_base(decimal, base, 1);
	return(a + 2);
}


/*int main()
{	
	void *ptr = (void *)0x7ffeefbff710;	
	char test[] = "afdsfsadfasdfsadfasdfsdafsadfdasfsdafasdf";
	void *pint = 'a';
	ft_printp(test);
	ft_putchar_fd('\n',1);
	printf("%d",test );
	printf("\n%p",test );
}  */