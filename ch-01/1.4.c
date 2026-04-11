#include <stdio.h>

int	main(void)
{
	double	cel;
	double	far;
	double	lower;
	double	upper;
	double	step;

	lower = -17.80;
	upper = 148.90;
	step = 20.00;
	cel = lower;
	while (cel <= upper)
	{
		far = (9.0 / 5.0 * cel) + 32.00 ;
		printf("%6.1lf for this cel: %6.1lf \n", far, cel);
		cel = cel + step;
	}
	return (0);
}
