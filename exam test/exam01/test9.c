#include <unistd.h>
void ftwrite(char c)
{
    write(1,&c,1);
}
void ft_putnbr(int nb)
{
    if (nb <= 9)
    {
        ftwrite(nb + '0');
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10); 
    }
    
}
int main()
{
    int i = 0;
    while (i <= 100)
    {
        if  (i % 15 == 0)
        {
            write(1,"fizzbuzz",8);
            write(1,"\n",1);
        }
        else if (i % 3 == 0)
        {
            write(1,"fizz",4);
            write(1,"\n",1);
        }
        else if  (i % 5 == 0)
        {
            write(1,"buzz",4);
            write(1,"\n",1);
        }
        else
        {
            ft_putnbr(i);
            write(1,"\n",1);
        }
    i++; 
    }   
}