#include <stdio.h>
char *ft_strrev(char *str)
{
    char c;
    int size = 0;
    int i = 0;
    while (str[size])
    {
        size++;
    }
    while (i < size - 1)
    {
        c = str[i];
        str[i] = str[size - 1];
        str[size - 1] = c;
        i++;
        size--;
    }
    return str;
}
int main()
{
    char str[] = "hamza";
    printf("%s",ft_strrev(str));
}