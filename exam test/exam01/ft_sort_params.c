#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
char **sortbyascii(char **av, int ac)
{
	int i;
	int k;
	char *kass;

	i = 1;
	while (i < ac)
	{
		k = i + 1;
		while (k < ac)
		{
			if (ft_strcmp(av[i], av[k]) > 0)
			{
				kass = av[i];
				av[i] = av[k];
				av[k] = kass;
			}
			k++;
		}
		i++;
	}
	return (av);
}
int main(int ac, char **av)
{
	sortbyascii(av, ac);
	int i;
	int j;

	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
