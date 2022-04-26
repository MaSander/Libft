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
