/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:56:47 by hrami             #+#    #+#             */
/*   Updated: 2024/09/16 17:10:52 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*str;

	size = 0;
	i = 0;
	while (src[size])
	{
		size++;
	}
	str = malloc(size + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int main()
// {
//     char src[] = "hamza";
//     printf("%s", ft_strdup(src));
// }
