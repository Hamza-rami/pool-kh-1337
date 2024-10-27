#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_putnbr(int nb)
{
    if (nb <= 9)
    {
        ft_putchar(nb + 48);
    }
    else
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
}
int main()
{
    int i = 0;
    while (i <= 100)
    {
        if (i % 15 == 0)
        {
            write(1,"fizzbuzz",9);
        }
        else if (i % 5 == 0)
        {
             write(1,"buzz",5);
        }
        else if (i % 3 == 0)
        {
            write(1,"fizz",5);
        }
        else
            ft_putnbr(i);
            ft_putchar('\n');
        i++;
    }
}
