#include <unistd.h>
#include <stdio.h>

char *revstr(char *str)
{
    int i = 0;
    int size = 0;
    char x;
    while (str[i])
    {
        size++;
    }
    int fin = size - 1;
    while (i < size / 2)
    {
        x = str[i];
        str[i] = str[fin];
        str[fin] = x;
        i++;
        fin--;
    }
    return(str);
}
int main()
{
    char str[] = "hamzar";
    revstr(str);
    printf("%s",str);
}