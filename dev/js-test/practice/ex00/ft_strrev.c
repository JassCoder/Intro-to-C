char    *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    char temp;
    char *o = str;

    while(str[len] != '\0')
    {
        len++;
    }
    len = len - 1;
    while (i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return (o);

}
#include<stdio.h>
int main(){
    char str[] = "Hello love i am here for love you";
    printf("%s\n", str)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ;
    printf("%s\n", ft_strrev(str));
    return 0;
}