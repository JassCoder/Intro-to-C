int ft_strcmp(char *s1,char *s2)
{
    int out = 0;
    if (*s2 == '\0')
    {
        return (0);
    }
    while( *s1 && *s2 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    out = *s1 - *s2;
    return (out);

}
#include <stdio.h>
int main()
{
    char a[] = "hell o";
    char b[] = "hello ";
    printf("%d\n",ft_strcmp(a,b));
    
	printf("%d\n",ft_strcmp("hello", "hello"));
	printf("%d\n",ft_strcmp("abc", "acb"));
	printf("%d\n",ft_strcmp("xyz", "abc"));
    
    return (0);

}