/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:29:42 by hrami             #+#    #+#             */
/*   Updated: 2024/09/07 11:26:28 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (x == 1 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (x == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			x = 0;
		}
		else
			x = 1;
		i++;
	}
	return (str);
}