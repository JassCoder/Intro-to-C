#include <stdio.h>
#define IN 0
#define OUT 1

int	main(void)
{
	int	c;
	int	nl;
	int	nw;
	int	nc;
	int	state;

	state = OUT;
	nl = nc = nw = 0;
	c = getchar();
	while (c != EOF)
	{
		if (c == '\n')
		{
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
		}else if (state == OUT)
		{
			state = IN;
		}
		putchar(c);
		c = getchar();

	}	
	return (0);
}
