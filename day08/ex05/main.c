#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

int	main(int argc, char **argv)
{
	struct s_stock_par *par;
	par = ft_param_to_tab(argc, argv);
	ft_show_tab(par);
	return (0);
}

