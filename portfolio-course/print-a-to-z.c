#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'a';
	while(c <= 'z')
	{
		putchar(c);
		++c;
	}
	printf("\n");
	for (c = 'A'; c <= 'Z';++c)
	{
		putchar(c);
	}
	printf("\n");
	return (0);
}
