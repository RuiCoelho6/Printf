/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpires-c <rpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:24:13 by rpires-c          #+#    #+#             */
/*   Updated: 2024/05/27 11:05:45 by rpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrr(char *s, int fd)
{
	int i;
	i = 0;
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		ft_putcharr(*s, fd);
		s++;
		i++;
	}
	return(i);
}
/*
int	main(int ac , char **av)
{
    ft_putstr_fd(av[1],1);
}*/
/* int	main(int ac , char **av)
{
	char *teste = "d";
    ft_putstr(teste);
} */