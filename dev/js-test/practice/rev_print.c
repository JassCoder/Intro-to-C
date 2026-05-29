
#include<unistd.h> 
char *ft_rev_print(char *str)
{
    int len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    len = len - 1;
    while (len >= 0)
    {
        write(1,&str[len],1);
        len--;
    }
    write(1,"\n",1);
    return (str);
}
// char *ft_rev_print(char *str)
// {
//     int len = 0;
//     int i;

//     // Calculate length without moving the original 'str' pointer
//     while (str[len] != '\0')
//         len++;

//     // Print characters in reverse order
//     // Start from the last character (len - 1) down to 0
//     i = len - 1;
//     while (i >= 0)
//     {
//         write(1, &str[i], 1);
//         i--;
//     }
    
//     write(1, "\n", 1);

//     // Return the original string pointer as per prototype
//     return (str);
// }
#include<stdio.h>
int main(){
    char a[] = "hello i am here see me here";
    ft_rev_print(a);
}