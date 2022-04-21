/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 19:51:15 by msander-          #+#    #+#             */
/*   Updated: 2022/01/14 01:10:31 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

size_t	find_trimmed_amount(char const *s1, char const *set)
{
	size_t	len;
	int		i;
	char	*r;

	len = 1;
	i = 0;
	while(s1[i])
	{
		r = ft_strrchr(set, *s1);
		if(r == 0)
			len++;
		i++;
	}

	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		count;
	int		isequal;
	char	*trimmed;

	i = 0;
	count = 0;
	isequal = 0;
	if (set == NULL)
		return NULL;
	trimmed = malloc(find_trimmed_amount(s1, set));
	while (*s1)
	{
		while (set[i])
		{
			if(*s1 == set[i])
				isequal = 1;
			i++;
		}
		if (isequal == 0)
		{
			trimmed[count] = *s1;
			count++;
		}
		isequal = 0;
		i = 0;
		s1++;
	}
	return (trimmed);
}
