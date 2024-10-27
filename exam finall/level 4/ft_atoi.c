#include <stdio.h>
int ft_atoi(char *str)
{
    int r = 0;
    int s = 1;
    int i = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            s *= -1;
        }
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        r = r * 10 + (str[i] - 48);
        i++;
    }
    return(r * s);
}
int main()
{
    char str[] = "-+123qw4";
    int x = ft_atoi(str);
    printf("%d",x);
}