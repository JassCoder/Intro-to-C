#include <stdio.h>

int	main(void)
{
	float	f;
	float	step;

	f = 0;
	step = 20.0;
	while (f <= 300.0)
	{
		printf("%6.1f %6.1f \n", f, (5.0 / 9.0) * (f - 32.0));
		f = f + step;
	}
	printf("now for in reverse\n");
	f = 300.0;
	while (f >= 0)
	{
		printf("%6.1f %6.1f \n", f, (5.0 / 9.0) * (f - 32.0));
		f = f - step;
	}
	return (0);
}
