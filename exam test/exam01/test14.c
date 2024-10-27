char *sort(char *str)
{
    int i = 0;
    int size = 0;
    char kass;
    while (str[size])
    {
        size++;
    }
    while (i < size - 1)
    {
        kass = str[i];
        str[i] = str[size - 1];
        str[size - 1] = kass;
        i++;
        size--;
    }
    return(str);
}
int ono(char *s1)
{
    int i = 0;
    while (s1[i] && sort(s1)[i] && s1[i] == sort(s1)[i])
    {
        i++;
    }
    i = s1[i] - sort(s1)[i];
    if (i == 0)
    {
        return 1;
    }
    return 0;
}
#include <stdio.h>
int main()
{
    char str[] = "ohmza";
    printf("%d\n",ono(str));
}