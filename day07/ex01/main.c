#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main(int argc, char **argv)
{
	int min = atoi(argv[1]), max = atoi(argv[2]);
	int	*tab = ft_range(min, max);
	long long int l = (long long int)max - (long long int)min;

	(void)argc;
	int i = -1;
	while (++i < l)
		printf("%d\n", tab[i]);
	return (0);
}
