#include <stdio.h>
#include <unistd.h>

int main (int argc ,char *argv[])
{
int  x = 0 ;

    if ( argc == 2 )
    {
        while (argv[1][x] == ' ' || (argv[1][x] >= 9 && argv[1][x] <= 13)) 
        {
            x++;
        }
        while (argv[1][x])
        {
            if (argv[1][x] ==  ' ')
            {
            write (1,"\n",1);
            return 0;
            }
            write (1,&argv[1][x],1);
        x++;
        }
    }
    write (1,"\n",1);
    return 0;
}