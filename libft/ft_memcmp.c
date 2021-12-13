/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:47:04 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/10 16:22:18 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *source1, const void *source2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) source1)[i] != ((unsigned char *) source2)[i])
			return (((unsigned char *)source1)[i]
			- ((unsigned char *)source2)[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%d",ft_memcmp("test", "tEst", 100));
	printf("\n%d",memcmp("test", "tEst", 100));
}
*/