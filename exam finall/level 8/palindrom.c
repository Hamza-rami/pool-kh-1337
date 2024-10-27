#include <unistd.h>
int main(int ac ,char **av)
{
    int i = 0;
    int j = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            i++;
        }
        while (j < i - 1)
        {
            if (av[1][j] != av[1][i - 1])
            {
                return(write(1,"\n",1));
            }
            j++;
            i--;
        }
        i = 0;
        while (av[1][i])
        {
            write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}