#include<stdio.h>
#include<unistd.h>

char    *ft_strrev(char *str){

    char *result = str;
    int len = 0; 
    int i = 0;
    char t;
    if (*str == '\0')
        return (str);
    

    while(*str)
    {
        len++;
        str++;
    }
    len = len - 1;
    while (i < len)
    {
        t = result[i];
        result[i] = result[len];
        result[len] = t;
        i++;
        len--;
    }
    return (result);

}


int main(int c, char **v)
{
    if( c == 2)
    {
        printf("%s" , ft_strrev(v[1]));
    }   
    else
    {
        printf("Please give arguments after program name");
    }
}