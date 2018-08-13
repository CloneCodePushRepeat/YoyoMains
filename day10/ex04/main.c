#include <stdio.h>

int	ft_count_if(char **tab, int(*f)(char *));

int	ft_strcmp(char *s1, char *s2)
{
	return (*s1 && *s2 && *s1 == *s2 ? ft_strcmp(s1 + 1, s2 + 1) : *s1 - *s2);
}

int	is42(char *str)
{
	return (!ft_strcmp("42", str));
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_count_if(argv, &is42));
	return (0);
}
