void ft_sort_wordtab(char **tab);
void ft_print_words_tables(char **tab);

int	main(int argc, char **argv)
{
	(void)argc;
	ft_sort_wordtab(argv);
	ft_print_words_tables(argv);
	return (0);
}
