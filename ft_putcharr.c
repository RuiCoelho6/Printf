/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpires-c <rpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:45:47 by rpires-c          #+#    #+#             */
/*   Updated: 2024/05/27 10:52:56 by rpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcharr(char c, int fd)
{
	write(fd, &c, 1);
    return(1);
}

/*
int main (void)
{
    ft_putchar_fd('a',1);
    ft_putchar_fd('\n',1);
    ft_putchar_fd('a',1);
}*/