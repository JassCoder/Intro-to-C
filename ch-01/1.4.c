#include<stdio.h>

int main()
	{
		double cel;
		double far;

		double lower = -17.80;
		double upper = 148.90;
		double step = 20.00;
		
		cel = lower;
		while (cel <= upper)
		
		{
			far =( 9.0/5.0 * cel) + 32.00;
			printf("%6.1lf for this cel: %6.1lf \n",far,cel);
			cel = cel + 20.00;
		}
	return 0;
	}
