/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:15:35 by hrami             #+#    #+#             */
/*   Updated: 2024/09/19 14:19:46 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_copy(char *str, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		size;
	char	*ptr;

	size = 0;
	i = 0;
	while (str[i])
	{
		size++;
		i++;
	}
	ptr = malloc(size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_copy(ptr, str);
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*p;

	i = 0;
	p = malloc(sizeof(t_stock_str) * (ac + 1));
	if (p == NULL)
		return (NULL);
	while (i < ac)
	{
		p[i].size = size(av[i]);
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		i++;
	}
	p[i].str = 0;
	return (p);
}
