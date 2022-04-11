/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:26:01 by msander-          #+#    #+#             */
/*   Updated: 2022/04/09 02:23:53 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

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
