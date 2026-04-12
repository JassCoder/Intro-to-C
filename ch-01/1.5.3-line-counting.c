#include <stdio.h>

int	main(void)
{
	int	c;
	int	nl;

	nl = 0;
	c = getchar();
	while (c != EOF)
	{
		if (c == '\n')
		{
			++nl;
		}
		c = getchar();
	}
	printf("new lines : %d \n", nl);
	return (0);
}
