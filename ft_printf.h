/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpires-c <rpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:40:57 by rpires-c          #+#    #+#             */
/*   Updated: 2024/05/27 10:54:30 by rpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <aio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

int ft_printf(const char *formant, ...);

int ft_printp(unsigned long int decimal);

int ft_putnbr_base(  long int nbr, char *base,int neg);

int	ft_putcharr(char c, int fd);

int	ft_putstrr(char *s, int fd);

#endif
