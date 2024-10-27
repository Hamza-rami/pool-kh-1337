#include <unistd.h>

int main (int ac , char **av)
{
char str[30];
char str1[30];
int i = 0;
int x = 0;
int j = 0;
char q;
if(ac == 3)
{
    while (av[2][i])
    {
        if(av[1][j] == av[2][i])
        {
            str[x] = av[1][j];
            j++;
            x++; 
        }
        i++;
    }
    x = 0;
    i = 0;
    while (str[x])
    {
        q = str[x];
        j = 0;
        while (str[j] != q && str[j])
        {
            j++;
        }
        if (str[j] == '\0')
        {
            str1[i] = q;
            i++;
        }
        x++;
    }
    i = 0;
    while (str1[i])
    {
        write(1, &str1[i], 1);
        i++;
    } 
}
write(1, "\n", 1);
}
