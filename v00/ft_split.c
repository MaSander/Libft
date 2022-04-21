/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 22:28:25 by msander-          #+#    #+#             */
/*   Updated: 2022/01/13 07:57:19 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_occurrences(const char *s, char c)
{
	int	occurrences;
	int	ifnotequal;

	occurrences = 0;
	ifnotequal = 0;
	while(*s)
	{
		if (*s != c && ifnotequal == 0)
		{
			ifnotequal = 1;
			occurrences++;
		}
		if(*s == c)
			ifnotequal = 0;
		s++;
	}
	return (occurrences);
}

char	**ft_split(const char *s, char c)
{
	int		index;
	int		split;
	char	**array;
	
	if (!s)
		return (NULL);
	array = ft_calloc(ft_occurrences(s, c)+1,sizeof(char *));
	if (!array)
		return (NULL);
	split = 0;
	index = 0;
	while (*s)
	{
		if (*s != c)
			split++;
		if (*s == c && split > 0)
		{
			array[index] = ft_substr(s-split, 0, split);
			index++;
			split = 0;
		}
		s++;
	}
	if(split)
		array[index] = ft_substr(s-split, 0, split);
	return (array);
}
