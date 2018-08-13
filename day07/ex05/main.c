#include <stdio.h>

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int	main(int argc, char **argv)
{
	char **no_white;

	if (argc > 1)
	{
		no_white = ft_split_whitespaces(argv[1]);
		ft_print_words_tables(no_white);
	}
	return (0);
}
