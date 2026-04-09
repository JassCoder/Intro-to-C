#include <stdio.h>

int main()
{
	float far;
	float cal;

	float upper = 300.0;
	float lower = 0.0;
	float step = 20.0;
	far = upper;
	while(far >= lower)
	{
		cal = 5.0 * (far-32.0)/9.0;
		printf("if far is %3.1f then cal is: %3.1f \n",far,cal);
		far = far - step;	
	}
	return 0;
}
