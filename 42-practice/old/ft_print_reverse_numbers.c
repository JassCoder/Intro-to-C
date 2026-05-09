#include <unistd.h>

void	ft_print_numbers(void)
{
	int	c;

	c = '9';
	while (c >= '0')
	{
		write (1, &c, 1);
		c--;
	}
}

int	main(void)
{
	ft_print_numbers();
	write (1, "\n", 1);
	return (0);
}
