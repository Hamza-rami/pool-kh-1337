#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print(int a , int b )
{
	ft_putchar('0' + a / 10);
	ft_putchar('0' + a % 10);
	ft_putchar(' ');
	ft_putchar('0' + b / 10);
	ft_putchar('0' + b % 10);
}

void comb2()
{
	int a;
	int b;

	a = 0 ;
	while (a < 99)
	{
		b = a +1;
		while (b <= 99)
		{
			ft_print(a,b);
			if (!(a==98 && b==99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
int main()
{
	comb2();
}
