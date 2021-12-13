/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:05:18 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/29 16:27:47 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *string, size_t byte_length)
{
	size_t			i;
	unsigned char	*c;

	c = string;
	i = 0;
	while (i < byte_length)
	{
		c[i] = 0;
		i++;
	}
}
/*
int main()
{
    char array[80] = "Bonjour";
    printf("1: %s\n", array);
    ft_bzero(array, 0);
    printf("2: %s\n", array);
    bzero(array, 0);
    printf("3: %s", array);
}
*/