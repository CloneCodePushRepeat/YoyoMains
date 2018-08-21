#include "ft_list.h"
#include <stdio.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nbr);

int		ft_strcmp(char *s1, char *s2)
{
	return (*s1 && *s2 && *s1 == *s2 ? ft_strcmp(s1 + 1, s2 + 1) : *s1 - *s2);
}

void	ft_putdata(void *data)
{
	ft_putstr((char *)data);
	ft_putstr(" ");
}

int		is_it_there(void *data1, void *data2)
{
	char c = *((char *)data1);
	char *str = (char *)(data2);

	while (*str)
	{
		if (*str++ == c)
			return (0);
	}
	return (1);
}

int main(int argc, char *argv[])
{
	t_list *first1;
	t_list *first2;
	t_list *first3;
	char	*str1 = "macouille";
	char	*str3 = "licorne";

	first1 = ft_list_push_params(argc, argv);
	ft_putstr("BASIC ORDER:\n");
	ft_list_foreach(first1, &ft_putdata);

	first2 = ft_list_push_params(argc, argv);
	ft_list_reverse_fun(first2);
	ft_putstr("\nREVERSE FUN:\n");
	ft_list_foreach(first2, &ft_putdata);

	ft_list_merge(&first1, first2);
	ft_putstr("\nBOTH IN ONE:\n");
	ft_list_foreach(first1, &ft_putdata);

	ft_list_push_back(&first1, (void *)str1);
	ft_putstr("\nPUSHBACK:\n");
	ft_list_foreach(first1, &ft_putdata);

	ft_list_push_front(&first1, (void *)str3);
	ft_putstr("\nPUSHFRONT\n");
	ft_list_foreach(first1, &ft_putdata);

	ft_putstr("\nLAST ONE: ");
	ft_putstr((char *)(ft_list_last(first1)->data));
	ft_putstr("\n");

	ft_putstr("LIST SIZE: "); 
	ft_putnbr(ft_list_size(first1));

	ft_putstr("\n4th ELEMENT: ");
	ft_putstr((char *)(ft_list_at(first1, 4)->data));

	ft_list_sort(&first1, &ft_strcmp);
	ft_putstr("\nSORTED:\n");
	ft_list_foreach(first1, &ft_putdata);

	ft_sorted_list_insert(&first1, "+loolz", &ft_strcmp);
	ft_sorted_list_insert(&first1, "lama", &ft_strcmp);
	ft_sorted_list_insert(&first1, "zass", &ft_strcmp);

	ft_putstr("\nSORTED + INSERT:\n");
	ft_list_foreach(first1, &ft_putdata);

	ft_putstr("\nLIST FOREACH IF:\n");
	ft_list_foreach_if(first1, &ft_putdata, "o", &is_it_there);

	ft_putstr("\nLIST FIND: ");
	ft_putstr((char *)ft_list_find(first1, "macouille", &ft_strcmp)->data);

	first3 = ft_list_push_params(argc, argv);
	ft_list_sort(&first3, &ft_strcmp);
	ft_sorted_list_merge(&first1, first3, &ft_strcmp);
	ft_putstr("\nSORTED + MERGE:\n");
	ft_list_foreach(first1, &ft_putdata);

	ft_list_reverse(&first1);
	ft_putstr("\nREVERSE NOT FUN:\n");
	ft_list_foreach(first1, &ft_putdata);

	ft_list_remove_if(&first1, "a", &is_it_there);
	ft_putstr("\nREMOVE IF:\n");
	ft_list_foreach(first1, &ft_putdata);

	ft_list_clear(&first1);

	return 0;
}
