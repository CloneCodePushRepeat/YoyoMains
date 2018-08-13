#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char **clean;

	if (argc > 2)
	{
		clean = ft_split(argv[1], argv[2]);
		while (*clean)
			printf("%s\n", *clean++);
	}
	return (0);
}
