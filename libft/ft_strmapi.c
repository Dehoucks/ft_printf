/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:34:37 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/18 13:32:55 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*array;
	int				length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	i = 0;
	array = malloc(sizeof(char) * length + 1);
	if (!array)
		return (NULL);
	while (s[i])
	{
		array[i] = f(i, s[i]);
		i++;
	}
	array[i] = 0;
	return (array);
}
