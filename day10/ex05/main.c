#include <stdio.h>
#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int intcmp(int a, int b)
{
	return (a - b);
}

int	main(int argc, char **argv)
{
	int	i;
	int	*tab;

	if (argc > 1)
	{
		tab = (int *)malloc((argc - 1) * sizeof(int));
		i = -1;
		while (++i < argc - 1)
			tab[i] = atoi(argv[i + 1]);
		printf("%s\n", ft_is_sort(tab, argc - 1, &intcmp) ?
				"SORTED!!!" : "UNSORTED");
	}
	return (0);
}
