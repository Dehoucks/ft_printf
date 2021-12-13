/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:02:51 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/10 14:26:23 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *source1, const char *source2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (source1[i] && i < n - 1)
	{
		if (source1[i] != source2[i])
			return ((unsigned char) source1[i] - (unsigned char) source2[i]);
		i++;
	}
	return ((unsigned char) source1[i] - (unsigned char) source2[i]);
}
/*
int	main()
{
	char *source1 = "test\200";
	char *source2 = "test\0";

	printf("%d\n", ft_strncmp(source1, source2, 6));
	printf("%d", strncmp(source1, source2, 6));
}*/