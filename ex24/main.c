/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:05:38 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/15 12:10:41 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

int main(void)
{
    ft_putstr("Hello, World!\n");
    
    int len = ft_strlen("Hello, World!");
    printf("Length: %d\n", len);
    
    int cmp = ft_strcmp("abc", "abcd");
    printf("Compare: %d\n", cmp);
    
    int a = 42, b = 24;
	printf("Original a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("Swapped: a = %d, b = %d\n", a, b);
    
    return 0;
}

