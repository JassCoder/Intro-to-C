#include <stdio.h>

int	main(void)
{
	int	speed;
	int	time;
	int	distance;

	speed = 0;
	time = 0;

	printf("Speed: ");
	scanf("%d", &speed);
	printf("time: ");
	scanf("%d", &time);
	distance = speed * time;
	printf("Distance: %d \n", distance);
	return (0);
}
