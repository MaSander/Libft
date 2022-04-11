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

char	*ft_strtrim(char const *s1, char const *set)
{
	int			isequal;
	size_t		s1len;
	char		*str;
	size_t		i;

	s1len = ft_strlen(s1);
	str = malloc((s1len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*s1)
	{
		isequal = 0;
		i = ft_strlen(set);
		while (i)
		{
			if (*s1 == set[i])
				isequal = 1;
			i--;
		}
		if (isequal)
			((char *)str)[ft_strlen(str) + 1] = *s1;
		s1++;
	}
	str[s1len + 1] = '\0';
	printf("\nRESULT: %s\n", str);
	return (str);
}
