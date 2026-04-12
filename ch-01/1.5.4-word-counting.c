#include <stdio.h>

#define IN 1
#define OUT 0

//count lines,words, and chracters in input

int	main(void)
{
	int	c;
	int	nl;
	int	nw;
	int	nc;
	int	state;

	state = OUT;
	nl = nw = nc = 0;
	c = getchar();
	while (c != EOF)
	{
		nc = nc + 1;
		if (c == '\n')
		{
			nl = nl + 1;
		}
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			nw = nw + 1;
		}
		//c = getchar();
	}
	printf("newlines:%d  new words:%d  new characters:%d \n", nl, nw, nc);
	return (0);
}
