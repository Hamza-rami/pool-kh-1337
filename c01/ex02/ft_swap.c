/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:41:26 by hrami             #+#    #+#             */
/*   Updated: 2024/08/30 22:43:21 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	kass;

	kass = *a;
	*a = *b;
	*b = kass;
}
int main()
{
	int *a = "56";
	int *b = "67";
	ft_swap(a,b);
	printf("%d %d",*a,*b);
}