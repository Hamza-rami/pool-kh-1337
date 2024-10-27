#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char    *putnbr(int nb, char **str)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11); // Fix this
		return (*str);
	}
	if (nb < 0)
	{
		nb *= -1;
		**str = '-';
        (*str)++;
        **str = 0;
	}
    if (nb > 9)
        putnbr(nb / 10, str);
    **str = (nb % 10) + '0';
    (*str)++;
    **str = 0;
    return (*str);
}

void	ft_itoi(int nb)
{
    char    *str;
    char    *ptr;

    ptr = str = malloc(3);
    putnbr(nb, &ptr);
    printf("%s\n", str);
}

int main()
{
    ft_itoi(-1056);
}