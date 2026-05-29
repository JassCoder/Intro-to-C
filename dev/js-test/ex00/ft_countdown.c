#include <unistd.h>
void ft_countdown(void)
{
    int i = '9';
    while (i >= '0')
    {
        write(1, &i,1);
        i--;
    }
}

int main ()
{
    ft_countdown();
    return (0);
}