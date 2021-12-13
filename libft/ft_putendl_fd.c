/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:26:21 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/18 14:22:38 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	c;
	char	temp;

	if (s)
	{
		c = '\n';
		i = 0;
		while (s[i])
		{
			temp = s[i];
			write(fd, &temp, 1);
			i++;
		}
		write(fd, &c, 1);
	}
}
