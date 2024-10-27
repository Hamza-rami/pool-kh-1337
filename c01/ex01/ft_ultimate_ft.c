/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:38:39 by hrami             #+#    #+#             */
/*   Updated: 2024/08/30 22:40:10 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_ultimate_ft(int ****nbr)
{
	****nbr = 678;
}
int main()
{
	int d = 678;
	int *nbr = &d;
	int **nbr1 = &nbr;
	int ***nbr2 = &nbr1;
	int ****nbr3 = &nbr2;
	ft_ultimate_ft(nbr3);
	printf("%d\n",d);
}