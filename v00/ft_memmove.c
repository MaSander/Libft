/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:31:58 by msander-          #+#    #+#             */
/*   Updated: 2022/01/14 01:38:40 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			srccpy[ft_strlen(src)];
	const char		*origin;
	char			*result;
	size_t					i;

	result = (char *)dest;
	origin = ft_memcpy(srccpy, src, ft_strlen(src));
	i = 0;
	if (!result && !origin)
		return (NULL);
	if (origin < result)
	{
		while (n--)
		{
			result[i] = origin[i];
			i++;
		}
	}
	else
		while (n--)
			*result++ = *origin++;
	return (dest);
}
