/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:25:10 by hrami             #+#    #+#             */
/*   Updated: 2024/09/09 15:27:08 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	else
	{
		while (str[i])
		{
			x = 0;
			while ((str[i + x] == to_find[x]) && to_find[x])
				x++;
			if (to_find[x] == '\0')
				return (&str[i]);
			i++;
		}
		return (0);
	}
}
int main()
{
    char str[] = "med amine ";
    char str1[] = "am";
    printf("%s", ft_strstr(str, str1));
}
