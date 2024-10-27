#include <unistd.h>

int main (int ac , char **av)
{
    int i = 0;
    int size = 0;
    int j = 0;
    if (ac == 3)
    {
        while (av[1][size])
        {
            size++;
        }
        while (av[2][i])
        {
            if(av[1][j] == av[2][i])
            {
                j++;
            }
            i++;
        }
        if(j == size)
        {
        i  = 0;
        while (av[1][i])
        {
            write(1, &av[1][i],1);
            i++;
        }
        }
    }
    write(1,"\n",1);
}