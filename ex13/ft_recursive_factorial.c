/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:33:12 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/16 20:47:06 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb);

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		int n = atoi(av[1]);
		int nb = ft_recursive_factorial(n);
		printf("The factorial of %i is: %i\n", n, nb);
		return (1);
	}
	printf("\n");
	return (0);
}
*/
int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
