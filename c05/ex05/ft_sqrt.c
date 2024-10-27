/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:50:05 by hrami             #+#    #+#             */
/*   Updated: 2024/09/15 16:58:28 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	i = 0;
	while (nb >= i)
	{
		if (nb == ft_iterative_power(i, 2))
		{
			return (i);
		}
		i++;
	}
	return (0);
}
// int main()
// {
//     printf("%d",ft_sqrt(-55));
// }
