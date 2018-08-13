#include <stdio.h>

void	ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);

int	main(void)
{
	char *str = "Hello, I am a string !";
	int a = 42, b = 73;

	ft_putstr(str);
	ft_putchar('\n');
	printf("STRCMP: %d\n", ft_strcmp(str, "Hello,"));
	printf("STRLEN: %d\n", ft_strlen(str));
	printf("BEFORE SWAP: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("AFTER SWAP: a = %d, b = %d\n", a, b);
}
