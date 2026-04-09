#include<stdio.h>

int main()
{
	float cal,far;

	float lower = 0;
	float upper = 300.0;
	float step = 20.0;
	
	far = lower;
	cal = 0;
	while(far <= upper)
	{
		printf("if value of fahrehhiet: %03.1f then celcius is: ",far);
		cal = 5.0 * (far-32.0)/9.0; // conversion formula
		printf("%03.1f\t%03.1f \n",cal,far); // printing new values
		far = far + step; // increasing by step 20
		
	}
	return 0;

}




