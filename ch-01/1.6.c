#include <stdio.h>

int	main(void)
{
	int	result;

	result = (getchar() != EOF);
	printf("here are the value: %d \n",result);
	return (0);
}
