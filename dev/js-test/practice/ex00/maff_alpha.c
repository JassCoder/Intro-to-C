#include <unistd.h>

int main()
{
    int i ,c;
    i = 'a';
    while (i <= 'z')
    {
        if((i % 2))
        {
            write(1,&i,1);
        }
        else
        {
            c = i - 32;
            write(1,&c,1);
        }
        i++;
    }
    write(1,"\n",1);
    return 0;
}