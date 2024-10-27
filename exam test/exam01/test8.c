#include <unistd.h>
int main(int ac , char *av[])
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (i % 3 == 0)
            {
                write(1,"5",1);
            }
            if (i % 5 == 0)
            {
                write(1,"3",1);
            }
            if (i % 15 == 0)
            {
                write(1,"15",1);
            }
            else
            write(1,&av[1][i],1);
        i++;
        } 
    }
    write(1,"\n",1);
}