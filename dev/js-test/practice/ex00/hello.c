#include<unistd.h>

int main()
{
    char *str = "Hello World!";
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1,"\n",1);
 }