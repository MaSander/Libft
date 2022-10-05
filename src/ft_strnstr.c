/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:26:01 by msander-          #+#    #+#             */
/*   Updated: 2022/04/25 19:12:08 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (n && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
		n--;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	llen;

	llen = ft_strlen(little);
	count = 0;
	if (*little == '\0')
		return ((char *)big);
	while ((*big != '\0') && (count < len))
	{
		if ((ft_strncmp(big, little, llen) == 0) && (count + llen <= len))
		{
			return ((char *)big);
		}
		big++;
		count++;
	}
	return (NULL);
}
