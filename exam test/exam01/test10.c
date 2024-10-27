#include <unistd.h>
#include <stdio.h>
int main(int ac, char *av[])
{
    char str[20];
    int i = 0;
    int x = 0;
    char q;
    if (ac == 2)
    {
        while (av[1][x])
        {
            x++;
        }
        while (av[1][x - 1] == ' ')
        {
            x--;
        }
        while (av[1][x - 1] != ' ')
        {
            str[i] = av[1][x - 1];
            i++;
            x--;
        }
        i = 0;
        x = 0;
        while (str[i])
        {
            i++;
        }
        while (x < i - 1)
        {
            q = str[i - 1];
            str[i - 1] = str[x];
            str[x] = q;
            x++;
            i--;
        }
        i = 0;
        while (str[i])
        {
            write(1, &str[i], 1);
            i++;
        }
        
    }
    write(1, "\n", 1);
}