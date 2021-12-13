/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:17:13 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/29 15:42:57 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_clear_malloc(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	words_counter(const char *str, char c)
{
	int	i;
	int	switcher;

	i = 0;
	switcher = 0;
	while (*str)
	{
		if (*str != c && switcher == 0)
		{
			switcher = 1;
			i++;
		}
		else if (*str == c)
			switcher = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish, char **split)
{
	char	*part;
	int		i;

	i = 0;
	part = malloc((finish - start + 1) * sizeof(char));
	if (part == NULL)
		return (ft_clear_malloc(split));
	while (start < finish)
		part[i++] = str[start++];
	part[i] = '\0';
	return (part);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((words_counter(s, c) + 1) * sizeof(split));
	if (!(split))
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
			split[j++] = word_dup(s, index, i, split);
		if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
			index = -1;
		else if (s[i] != c && index < 0)
			index = i;
		i++;
	}
	split[j] = 0;
	return (split);
}
/*
int	main()
{
	char **array = ft_split(" ba nan            e ", ' ');
	int i = 0;
	char **tab;
	tab = ft_split("chin  im ala", ' ');
	
	printf("%s\n", tab[3]);
	
	
	while (i < 10)
	{
		printf("%s\n", array[i]);
		i++;
	}
	
}
*/