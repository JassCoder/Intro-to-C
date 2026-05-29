#include<unistd.h>
int ft_atoi(const char *str)
{
    int sign = 0;
    int result = 0;
    while(*str == ' ' || (*str >= 9 && *str <= 13))
        {
            str++;
        }
    while(*str == '+' || *str == '-')
    {
        if(*str == '-')
        {
            sign++;
        }
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
            result *= 10;
            result += *str - '0'; 
            str++;
    }
    if (sign % 2 == 0)
        return (result);
    
    
    return (-result);
}
#include <stdio.h>
int	main()
{
	char	*a = "   ---+--+1234ab567";
	printf("%d\n",ft_atoi(a));
	return (0);
}