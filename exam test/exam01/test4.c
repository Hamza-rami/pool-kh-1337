#include  <unistd.h>
#include <stdio.h>
int ft_a(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == 'a')
        {
            return(i);
        }
        i++;
    }
    return (i);
}
int main()
{
    char str[] = "Hmza";
    int x =  ft_a(str);
    printf("%d",x);
}