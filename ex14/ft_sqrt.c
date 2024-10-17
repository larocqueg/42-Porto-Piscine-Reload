/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:40:33 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/15 16:45:53 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = atoi(av[1]);
		int nsqrt = ft_sqrt(n);

		printf("Sqrt of %d is: %d\n", n, nsqrt);
		return (0);
	}
	printf("Missing argument!\n");
	return (1);
}
*/
int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
