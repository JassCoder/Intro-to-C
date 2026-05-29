int ft_strlen(char *str)
{
    int i = 0;
    while(*str)
    {
        i++;
        str++;
    }
    return (i);
}

#include <stdio.h>
int main()
{
    char a[] = "hello world!!";
    printf("%d\n",ft_strlen(a));
} 