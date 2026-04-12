#include <stdio.h>

int	main(void)
{
	int	c;
	int	last_c;

	last_c = EOF;
	c = getchar();
	while (c != EOF)
	{
		if (c != ' ' || last_c != ' ')
		{
			putchar(c);
		}
		last_c = c;
		c = getchar();
	}
	return (0);
}
