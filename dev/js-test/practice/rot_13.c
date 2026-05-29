#include<stdio.h>
#include<unistd.h>
int main(int c, char **a){

    if (c == 2)
    {


        char b;
        int i = 0;
        while(a[1][i] != '\0')
        {
            if((a[1][i] >= 'a' && a[1][i] <= 'm') || (a[1][i] >= 'A' && a[1][i] <= 'M'))
            {
                b = a[1][i] + 13;
                write(1,&b,1);
            }
            else if((a[1][i] >= 'n' && a[1][i] <= 'z') || (a[1][i] >= 'N' && a[1][i] <= 'Z'))
            {
                b = a[1][i] - 13;
                write(1,&b,1);
            }
            i++;
        }
        write(1,"\n",1);
    }
    else {
        write(1,"\n",1);
    }
}