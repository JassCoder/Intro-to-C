#include <unistd.h>

int main(int c, char *v[])
{
    int i = 0;

    if ( c == 2)
    {
        while(v[1][i])
        {
            if (v[1][i] == 'a')
            {
                write(1, "a", 1);
                break;
            }
            i++;
        }
        write(1, "\n", 1);
    }
    else 
    {
    write(1, "a\n", 2);
    }
}