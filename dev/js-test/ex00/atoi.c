// int ft_atoi(const char *str)
// {
//     int out = 0;
//     while( *str >= '\t' && *str <= '\r' && (*str == ' '))
//     {
//         str++;
//     }

//     int sign = 0;

//     while (*str == '-' || *str == '+')
//     {
//         if (*str == '-')
//         {
//             sign++;
//         }
//         str++;
//     }

//     while(*str >= '0' && *str <= '9')
//     {
//         out = out * 10;
//         out = out + *str - '0';
//         str++;
//     }
//     if (!(sign % 2))
//     {
//         return (out);
//     }
//     return (-out);



    
    
    
    
// }
int	ft_atoi(char *str)
{
	int	num;
	int	check;

	num = 0;
	check = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			check++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	if (!(check % 2))
		return (num);
	return (-num);
}


#include <stdio.h>
int main()
{
    char str[] = "   -_---++--1234asdsdnf";
    printf("%d",ft_atoi(str));
}