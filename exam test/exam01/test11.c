#include <unistd.h>

char *strstr(char *s1, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (to_find[0] == '\0')
    {
        return( s1);
    }
    else
    {
        while (s1[i])
        {
            j = 0;
            while (to_find[j] && s1[i + j] == to_find[j])
            {
                j++;
            }
            if (to_find[j] == '\0')
            {
                return (&s1[i]);
            }
            i++;
        }
        return 0;
    }
}