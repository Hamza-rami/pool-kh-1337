#include <unistd.h>
#include <stdio.h>
int occ_a(char *str)
{
    int i = 0;
    int j = 0;
    while (str[i])
    {
        if(str[i] == 's')
        {
            j++;
        }
        i++;
    }
    return (j);
}
int main()
{
    char str[] = "sarsrfgs";
    int x = occ_a(str);
    printf("%d",x);
}