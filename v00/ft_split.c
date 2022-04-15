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

char **g_charger;

void	splitcharger(char const *s, char c)
{
	size_t	breaks;
	int		count;

	breaks = 0;
	count = 0;
	while(s[count])
	{
		if(s[count] == c)
			breaks++;
		count++;
	}
	g_charger = malloc(breaks++);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	lastpoint;
	int	clipperlen;
	int	occurrences;

	i = 0;
	lastpoint = 0;
	clipperlen = 0;
	occurrences = 0;
	splitcharger(s, c);
	while (s[i])
	{
		if(s[i] == c)
		{
			g_charger[occurrences] = ft_substr(s, lastpoint, clipperlen);
			lastpoint = i+1;
			clipperlen = -1;
			occurrences++;
		}
		clipperlen++;
		i++;
	}
	return (g_charger);
}
