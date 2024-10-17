/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:30:36 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/15 18:31:00 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	n;
	int	size;
	int	*dest;

	if (min >= max)
		return (NULL);
	size = (max - min);
	dest = (int *)malloc(sizeof(int) * size);
	i = 0;
	n = min;
	if (!dest)
		return (NULL);
	while (n < max)
	{
		dest[i] = n;
		n += 1;
		i++;
	}
	return (dest);
}
