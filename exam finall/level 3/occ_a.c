int occ_a(char *str)
{
    int i = 0;
    int count;
    while (str[i])
    {
        if (str[i] == 'a')
        {
            count++;
        }
        i++;
    }
    return count;
}