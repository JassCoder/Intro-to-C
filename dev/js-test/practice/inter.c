#include<unistd.h>
int repeat(char *str ,char c, int pos)
{
    int i = 0;
    while (i < pos)
    {
        if(str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void    inter(char *s1, char *s2)
{
    int i = 0;
    int j;

    while(s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {
                if (!repeat(s1,s1[i],i))
                {
                    write(1,&s1[i],1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
    write(1,"\n",1);
}

int main(int c, char **v)
{
    if(c == 3)
    {
        inter(v[1],v[2]);
    }
    else
    {
        write(1,"\n",1);
    }
}