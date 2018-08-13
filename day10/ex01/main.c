#include <unistd.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar(45);
	if (n > 9 || n < -9)
		ft_putnbr(n < 0 ? n / -10 : n / 10);
	ft_putchar(n < 0 ? 48 + ((n % -10) * -1) : 48 + (n % 10));
}

int		main(int argc, char **argv)
{
	int *tab;
	int size;
	int	lol;

	if (argc == 3)
	{
		size = atoi(argv[1]);
		lol = atoi(argv[2]);
		tab = (int *)malloc(size * sizeof(int));
		for (int i = 0; i < size; i++)
			tab[i] = lol++;
		ft_foreach(tab, size, &ft_putnbr);
	}
	return (0);
}
