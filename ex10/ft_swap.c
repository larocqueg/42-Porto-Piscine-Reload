/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:55:36 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/15 13:57:29 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
  int a = 10;
  int b = 20;
  printf("Original values are a = %d && b = %d\n", a, b);
  ft_swap(&a, &b);
  printf("Changed values are a = %d && b = %d\n", a, b);
  return (1);
}*/
