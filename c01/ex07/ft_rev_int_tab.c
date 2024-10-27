/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:16:20 by hrami             #+#    #+#             */
/*   Updated: 2024/09/01 20:17:13 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	kass;
	int	i;
	int	fin;

	i = 0;
	fin = size - 1;
	while (i < size / 2)
	{
		kass = tab[i];
		tab[i] = tab[fin];
		tab[fin] = kass;
		i++;
		fin--;
	}
}
