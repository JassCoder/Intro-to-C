#include <stdio.h>

int	main(void)
{
	int	eof;
	
	eof = EOF;
	
	int c;
	
	c = getchar();
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
		printf("this is the new value of EOF: %d \n",eof);
	}	
	return(0);
}
