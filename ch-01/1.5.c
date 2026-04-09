#include <stdio.h>

int main ()
{
	float F;

	for(F = 0; F <= 300.0; F = F + 20.0)
	{
		printf("%6.1f %6.1f \n",F,(5.0/9.0)*(F - 32.0));
	}

	printf("now for in reverse\n");

	for(F = 300.0; F >= 0; F = F - 20.0)
	{
		printf("%6.1f %6.1f \n",F,(5.0/9.0)*(F - 32.0));
	}


	return 0;


}
