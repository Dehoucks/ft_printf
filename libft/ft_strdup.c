/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:14:28 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/18 14:44:21 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char		*copy;
	size_t		i;

	i = 0;
	copy = malloc(ft_strlen(source) * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	while (source[i])
	{
		copy[i] = source[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int main()
{
	char *source = "Bonjour";
	printf("%s", ft_strndup(source, 25));
}*/