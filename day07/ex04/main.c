#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int	main(int argc, char **argv)
{
	char **no_white;

	if (argc > 1)
	{
		no_white = ft_split_whitespaces(argv[1]);
		while (*no_white)
			printf("%s\n", *no_white++);
	}
	return (0);
}
