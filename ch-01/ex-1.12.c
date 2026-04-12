#include <stdio.h>

#define IN 1
#define OUT 0

int	main(void)
{
	int c,state;
	
	state = OUT;
	c = getchar();
	while (c != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
			{
				putchar('\n');
				state = OUT;
			}
		}
		else {
			state = IN;
			putchar(c);
		}

		
		c = getchar();
}
	return (0);
}
