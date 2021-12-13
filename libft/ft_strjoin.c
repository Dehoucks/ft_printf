/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:14:40 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/29 14:46:24 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *source1, char const *source2)
{
	char	*joined;
	int		length;
	int		i;
	int		j;

	if (!source1 || !source2)
		return (NULL);
	i = 0;
	j = 0;
	length = ft_strlen(source1) + ft_strlen(source2);
	joined = malloc(sizeof(char) + length + 1);
	if (!(joined))
		return (NULL);
	while (source1[i])
	{
		joined[i] = source1[i];
		i++;
	}
	while (source2[j])
	{
		joined[i] = source2[j++];
		i++;
	}
	joined[i] = 0;
	return (joined);
}

/*
int	main()
{
	printf("%s", ft_strjoin("", "1"));
}*/