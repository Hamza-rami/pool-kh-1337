#include <unistd.h>
int ft_double(char *str, char c, int idx)
{
    int i =0;
    while (str[i] && i < idx)
    {
        if (str[i] == c)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main(int ac ,char **av)
{
    int i = 0;
    int j = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            i++;
        }
        while (av[2][j])
        {
            av[1][i + j] = av[2][j];
            j++;
        }
        av[1][i + j] = '\0';
        j = 0;
        while (av[1][j])
        {
            if(ft_double(av[1], av[1][j],j) == 1)
            {
                write(1,&av[1][j],1);
            }
            j++;
        }
    }
    write(1,"\n",1);
}