#include <stdio.h>

int	main(void)
{
	float	x;
	double	y;

	x = 5.2;
	y = 23.5;
	printf("%f\n", x);
	printf("%lf\n", y);
	printf("New value for x:");
	scanf("%f", &x);
	printf("New value for y:");
	scanf("%lf", &y);
	printf("Here is the new value of Float x: %f\n", x);
	printf("Here is the new value of Double float y: %lf \n", y);
	return (0);
}
