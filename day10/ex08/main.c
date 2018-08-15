int		ft_strlcmp(char *s1, char *s2)
{
	int l[2];

	l[0] = 0;
	while (s1[l[0]])
		l[0]++;
	l[1] = 0;
	while (s2[l[1]])
		l[1]++;
	return (l[0] - l[1]);
}

int		ft_strcmp(char *s1, char *s2)
{
	return (*s1 && *s2 && *s1 == *s2 ? ft_strcmp(s1 + 1, s2 + 1) : *s1 - *s2);
}

void	ft_putchar(char c);
void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *));
void	ft_print_words_tables(char **tab);

int		main(int argc, char **argv)
{
	(void)argc;
	ft_advanced_sort_wordtab(++argv, &ft_strlcmp);
	ft_print_words_tables(argv);
	ft_putchar('\n');
	ft_advanced_sort_wordtab(argv, &ft_strcmp);
	ft_print_words_tables(argv);
	return (0);
}
