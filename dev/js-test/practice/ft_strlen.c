int ft_strlen(char *str)
{
    int i = 0;
    while(*str != '\0')
    {
        i++;
        str++;
    }
    return (i);
}
#include<stdio.h>
int main(){
    char c[] = "hello i am here for love , will get one.";
    char a[] = "0123456789";
    printf("%d\n",ft_strlen(c));
    printf("%d\n",ft_strlen(a));
    return 0;
}
