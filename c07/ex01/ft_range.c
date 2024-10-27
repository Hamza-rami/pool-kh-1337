/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:11:28 by hrami             #+#    #+#             */
/*   Updated: 2024/09/16 17:38:48 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
//int main()
//{
//   int min = 90;
//   int max = 100;
//   int *x = ft_range(min , max);
//   while (min < max)
//   {
//      printf("%d\n",x[min]);
//      min++;
//   }
//}
