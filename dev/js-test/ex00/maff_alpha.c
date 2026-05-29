#include <unistd.h>

void    maff_alpha()
{
    int i = 'a';
    while (i <= 'z')
    {
        if(!(i % 2))
        {
            char temp = i - 32;
            write(1,&temp,1);
        }
        else
        {
            write(1,&i,1);
        }
        i++;

    }
    write(1,"\n",1);
}

int main()
{
    maff_alpha();
    return 0;
}
