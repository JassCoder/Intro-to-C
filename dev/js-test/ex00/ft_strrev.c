char *ft_strrev(char *str)
{
    int    s = 0;
    while (str[s])
    {
        s++;
    }
    s = s - 1;
    int    i = 0;
    while(i < s)
    {
            char temp = str[i];
            str[i] = str[s];
            str[s] = temp;
            i++;
            s--;
    }
    return (str);
}
#include <stdio.h>
int main()
{
    char a[] = "hello";
    printf("orginal : %s\n" ,a);
    ft_strrev(a);
    printf("reversed :%s\n" ,a);
    return (0);
}