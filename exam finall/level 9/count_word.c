#include <stdio.h>
int count_word(char *str)
{
    int count = 0;
    int i = 0;
    while(str[i])
    {
        while (str[i] == ' ')
        {
            i++;
        }
        if (str[i] && str[i] != ' ')
        {
            count++;
        }
        while ( str[i] && str[i] != ' ')
        {
            i++;
        }

    }
    return count;
}
int main()
{
    char str[] = "   hamza          rami          hdd     gwfsgv                     yfgu       jhhgg   ";
    printf("%d",(count_word(str)));
}