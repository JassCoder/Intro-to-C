/*#include <stdio.h>

int	main(void)
{
	int	c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
}*/
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	c;

	c = 'z' - 32;
	while (c >= ('a' - 32))
	{
		write (1, &c, 1);
		c--;
	}
}

int	main(void)
{
	ft_print_alphabet();
	write (1, "\n", 1);
	ft_print_alphabet();
	write (1, "\n", 1);
	return (0);
}
