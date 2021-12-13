/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:40:42 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/29 16:27:31 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t len)
{
	size_t			i;
	unsigned char	*array;

	array = buf;
	i = 0;
	while (i < len)
	{
		array[i] = c;
		i++;
	}	
	return (buf);
}
