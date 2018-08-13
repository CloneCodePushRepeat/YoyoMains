#include <stdio.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char	*dup;

	if (argc > 1)
	{
		dup = ft_strdup(argv[1]);
		printf("%s\n", dup);
	}
	return (0);
}
