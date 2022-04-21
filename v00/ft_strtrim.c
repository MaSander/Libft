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

	len = 1;
	while (*s1)
	{
		if (ft_strrchr(set, *s1) == 0)
			len++;
		s1++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*trimmed;

	i = 0;
	if (set == NULL)
		return (NULL);
	trimmed = ft_calloc(find_trimmed_amount(s1, set), 1);
	while (*s1)
	{
		if (ft_strrchr(set, *s1) == 0)
		{
			trimmed[i] = *s1;
			i++;
		}
		s1++;
	}
	return (trimmed);
}
