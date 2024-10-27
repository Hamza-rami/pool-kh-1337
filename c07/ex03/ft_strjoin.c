/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:21:40 by hrami             #+#    #+#             */
/*   Updated: 2024/09/16 17:33:14 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_size(int size, char **strs)
{
	int	c;
	int	y;
	int	count;

	c = 0;
	y = 0;
	count = 0;
	while (c < size)
	{
		y = 0;
		while (strs[c][y])
		{
			count++;
			y++;
		}
		c++;
	}
	return (count);
}

char	*ft_strcpy(int size, char **strs, char *sep, char *ptr)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	z = 0;
	while (x < size)
	{
		y = 0;
		while (strs[x][y])
			ptr[z++] = strs[x][y++];
		y = 0;
		if (x < size - 1)
		{
			while (sep[y])
				ptr[z++] = sep[y++];
		}
		x++;
	}
	ptr[z] = '\0';
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;

	if (size <= 0)
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = malloc (ft_size(size, strs) + sizeof(sep) * size - 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_strcpy(size, strs, sep, ptr);
	return (ptr);
}
// int main()
// {
//    char *str[] = {
//        "hamz",
//        "abdo",
//        "said"};
//    char *sep = ", ";
//    printf("%s\n",ft_strjoin(3,str,sep));
// }
