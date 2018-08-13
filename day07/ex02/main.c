#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	int	*range;
	int	i, min, max, size;

	if (argc == 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		size = ft_ultimate_range(&range, min, max);
		printf("SIZE: %d\n", size);
		i = -1;
		while (++i < (max - min))
			printf("%d%s", range[i], i < (max - min - 1) ? ", " : "\n");
	}
	return (0);
}

