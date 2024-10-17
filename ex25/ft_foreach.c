/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:36:43 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/16 11:37:06 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <unistd.h>
void    ft_putnbr(int nb)
{
    char    c;

    if (nb > 9)
        ft_putnbr(nb / 10);
    c = nb % 10 + '0';
    write(1, &c, 1);
	write(1, "\n", 1);
}

void    ft_foreach(int *tab, int length, void (*f)(int));

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    ft_foreach(arr, 5, &ft_putnbr);
    return (0);
}
*/
