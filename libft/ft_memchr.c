/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:27:07 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/29 14:30:40 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}
/*
int	main()
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
	printf("%s\n", (char *) memchr(tab, -1, 7));
}*/