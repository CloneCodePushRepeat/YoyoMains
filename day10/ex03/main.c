#include <stdio.h>

int	ft_any(char **tab, int(*f)(char *));

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
	printf("%s\n", ft_any(argv, &is42) ? "MATCH!!!" : "nothing");
	return (0);
}
