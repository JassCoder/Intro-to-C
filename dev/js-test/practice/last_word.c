#include<unistd.h>
void last_word(char *str)
{
    int len = 0;
    int end = 0;
    int start = 0;
    while (str[len])
    {
        len++;
    }
    len--;
    while(len >= 0 && (str[len] == ' ' || (str[len] >= 9 && str[len] <= 13))){
            len--;
        }
    
    end = len;
    
    while (len >= 0 && !(str[len] == ' ' || (str[len] >= 9 && str[len] <= 13))){
        len--;
    }
    start = len + 1;
    while (start <= end)
    {
        write(1,&str[start],1);
        start++;
    }


}


int main (int c,char **v)
{
    if (c == 2)
    {
        last_word(v[1]);
    }
    else 
    {
        write(1,"\n",1);
    }
}