#include <unistd.h>

void    maff_revalpha()
{
    int i = 'z';
    while (i >= 'a')
    {
        if(!(i % 2))
        {
            write(1,&i,1);
        }
        else
        {
            char temp = i - 32;
            write(1,&temp,1);
        }
        i--;
    }
    write(1,"\n",1);
    
}
int main()
{
    maff_revalpha();
    return 0;
}