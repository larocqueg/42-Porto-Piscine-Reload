/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:58:06 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/15 17:36:26 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
/*
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = atoi(av[1]);
		ft_is_negative(i);
	}
	ft_putchar('\n');
	return (1);
}*/
