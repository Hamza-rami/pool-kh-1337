#include <unistd.h>

void ft_putnbr(int nb)
{
	if (nb <= 9)
	{
		nb = nb + 48;
		write(1,&nb,1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
void ft_print()
{
	int a;
	a = 0;
	while (a <= 100)
	{
		if(a % 3 == 0 && a % 5 == 0)
		{
		write(1,"fizzbuzz",8);
		write(1,"\n",1);
		}
		if(a % 3 == 0)
		{
		write(1,"fizz",4);
		write(1,"\n",1);
		}
		if(a % 5 == 0)
		{
		write(1,"buzz",4);
		write(1,"\n",1);
		}
		else
		ft_putnbr(a);
		write(1,"\n",1);

		a++;
	}
	

}
int main()
{
	ft_print();
}