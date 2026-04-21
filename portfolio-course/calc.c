#include <stdio.h>

int	main(void)
{
	printf("Welcome to my calculator , here you can do basic commands like (/,*,-,+)\n");

	char auth;
	auth = 0;
	printf("you want to calculate? (Y/N)");
	scanf(" %c", &auth);
	printf("\n");
	if (auth == 'y' || auth == 'Y')
	{
		double input_X = 0;
		double input_Y = 0;
		double fo = 0;
		printf("What operation you want to do , please choose (/,*,-,+)\n");
		char o = 0;
		scanf(" %c", &o);
		printf("\n");
		printf("you want to do %c operation .\n",o);
		if (o == '+' || o == '-' || o == '*' || o == '/')
		{
			printf("Input X:");
			scanf("%lf" ,&input_X);
			printf("Input Y:");
			scanf("%lf" ,&input_Y);
		
		

			if (o == '+'){
				fo = input_X + input_Y;
			}
			else if (o == '-'){
				fo = input_X - input_Y;
			}
			else if (o == '*'){
				fo = input_X * input_Y;
			}
			else if (o == '/'){
				if (input_Y == 0)
				{
					printf("Invalid input\n");
					return (1);
				}else{
					fo = input_X / input_Y;
				}
			}else {
				printf("please choose between them (/,*,-,+)\n");
			}
			printf("your operation(%c) has been processed and out put is : %lf\n ",o,fo);
		}
		

	}else{
		printf("thank you so much for choosing my calculator program\n");
	}
	return (0);
}
