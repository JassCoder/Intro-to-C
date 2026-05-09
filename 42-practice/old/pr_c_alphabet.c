#include <unistd.h>

void	ft_print_capital_alphabets(void)
{
	int	c;

	c = 'a' - 32;
	while (c <= ('z' - 32))
	{
		write (1, &c, 1);
		c++;
	}
}

int	main(void)
{
	ft_print_capital_alphabets();
	write (1, "\n", 1);
	return (0);
}
