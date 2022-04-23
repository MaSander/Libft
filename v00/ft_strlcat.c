/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:02:50 by msander-          #+#    #+#             */
/*   Updated: 2022/04/23 02:28:40 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= size)
		return (size + srclen);
	while ((i <= (size - dstlen)) && (src[i]))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (size == (i + dstlen))
		dst[i + dstlen - 1] = '\0';
	dst[i + dstlen] = '\0';
	return (dstlen + srclen);
}
