#include <unistd.h>
int main(int ac ,char **av)
{
    int  i = 1;
    if (ac == 2)
    {
        if(av[1][0]>= 'a' && av[1][0] <= 'z')
        {
            av[1][0] -= 32;
            write(1,&av[1][0],1);
        }
        while (av[1][i])
        {
            if ((av[1][i - 1] == ' ') && (av[1][i] != ' ') && (av[1][i]>= 'a' && av[1][i] <= 'z'))
            {
                av[1][i] -= 32;
                write(1,&av[1][i],1);
            }
            else
                write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}