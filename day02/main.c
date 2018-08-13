/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yforeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 00:08:48 by yforeau           #+#    #+#             */
/*   Updated: 2018/08/02 16:22:15 by yforeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int	i;

	ft_print_alphabet();
	ft_putchar('\n');
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	ft_print_numbers();
	ft_putchar('\n');
	ft_is_negative(-12);
	ft_putchar('\n');
	ft_is_negative(0);
	ft_putchar('\n');
	ft_is_negative(6);
	ft_putchar('\n');
	ft_print_comb();
	ft_putchar('\n');
	ft_print_comb2();
	ft_putchar('\n');
	ft_putnbr(-512);
	ft_putchar('\n');
	ft_putnbr(36);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	i = 1;
	while (i < 10)
	{
		ft_print_combn(i++);
		ft_putchar('\n');
	}
	return (0);
}
