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
        while (av[1][j])
        {
            i = 0;
            while (av[2][i])
            {
               if (av[1][j] == av[2][i] && ft_double(av[1] , av[1][j] , j) == 1)
               {
                write(1,&av[1][j],1);
                break;
               }
               i++;
            }
            j++;
        }
    }
    write(1,"\n",1);
}
