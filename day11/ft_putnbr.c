/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yforeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 22:04:08 by yforeau           #+#    #+#             */
/*   Updated: 2018/08/16 05:46:20 by yforeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar(45);
	if (n > 9 || n < -9)
		ft_putnbr(n < 0 ? n / -10 : n / 10);
	ft_putchar(n < 0 ? 48 + ((n % -10) * -1) : 48 + (n % 10));
}
