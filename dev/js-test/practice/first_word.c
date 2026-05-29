#include <unistd.h>

void first_word(char *str){

    while(*str == ' ' || (*str >= 9 && *str <= 13))
    {
        str++;
    }
    while (*str >= 33 && *str <= 126)
    {
        write(1,str,1);
        str++;
    }
    write(1,"\n",1);

}

int main(int c, char **v){
    if  ( c == 2)
    {
        first_word(v[1]);
    }
    else{
        write(1,"\n",1);
    }
    return (0);
}