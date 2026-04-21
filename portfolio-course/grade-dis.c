#include <stdio.h>

int	main(void)
{
	int	grade;

	grade = 0;
	printf("what is your grade:");
	scanf(" %d", &grade);
	if (grade >= 95) printf("Pass Rank A+\n");
	else if (grade >= 90) printf("Pass Rank A\n");
	else if (grade >= 85) printf("Pass Rank B+\n");
	else if (grade >= 80) printf("Pass Rank B\n");
	else if (grade >= 75) printf("Pass Rank C+\n");
	else if (grade >= 70) printf("Pass Rank C\n");
	else if (grade >= 65) printf("Pass Rank D+\n");
	else if (grade >= 60) printf("Pass Rank D\n");
	else if (grade >= 55) printf("Pass Rank E+\n");
	else if (grade >= 50) printf("Pass Rank E\n");
	else printf("Failed try again later\n");
	
	return (0);
}
