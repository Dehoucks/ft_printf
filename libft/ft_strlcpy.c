/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:32:46 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/30 12:48:56 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t length)
{
	size_t	i;

	i = 0;
	while (source[i] && i < length)
	{
		dest[i] = source[i];
		i++;
	}
	if (i < length)
		dest[i] = 0;
	else if (length > 0)
		dest[i - 1] = 0;
	return (ft_strlen(source));
}
