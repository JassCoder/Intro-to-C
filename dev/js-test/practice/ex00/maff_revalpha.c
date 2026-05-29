#include<unistd.h>

int main(){
    int i = 0;
    int c = 'z';
    while(c >= 'a')
    {
        if(!(c % 2))
        {
            write(1,&c,1);
        }
        else
        {
            i = c - 32;
            write(1,&i,1);
        }
        c--;
    }
    write(1,"\n",1);
}