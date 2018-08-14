/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yforeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:06:54 by yforeau           #+#    #+#             */
/*   Updated: 2018/08/14 06:56:07 by yforeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespaces(char *str)
{
	static int	size = 0;
	int			l;
	int			i;
	char		*p;
	char		**tb;

	p = 0;
	size++;
	while (*str && (*str == 32 || (*str > 8 && *str < 12)))
		str++;
	l = 0;
	while (str[l] && !(str[l] == 32 || (str[l] > 8 && str[l] < 12)))
		l++;
	if (l)
	{
		p = (char *)malloc(l + 1);
		i = 0;
		while (*str && l--)
			p[i++] = *str++;
		p[i] = '\0';
	}
	tb = p ? ft_split_whitespaces(str) : (char **)malloc(size * sizeof(char *));
	tb[--size] = p;
	return (tb);
}
