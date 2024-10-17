/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:59:00 by larocqueg         #+#    #+#             */
/*   Updated: 2024/10/16 11:38:48 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			count++;
		++i;
	}
	return (count);
}
/*
#include <stdio.h>

int starts_with_a(char *str)
{
    if (str[0] == 'a' || str[0] == 'A')
	{
		printf("%s\n", str);
        return (1);
	}
    return (0);
}

int main(void)
{
    char *tab[] ={"apple","ambar","avocado","grape","apricot", "Animal", NULL};
	int count = ft_count_if(tab, &starts_with_a);
    
	printf("Number of strings starting with 'a' or 'A': %d\n", count);

    return (0);
}
*/
