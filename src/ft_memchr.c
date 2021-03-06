/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:47:55 by msander-          #+#    #+#             */
/*   Updated: 2022/04/25 19:15:06 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*p;

	p = (char *)str;
	while (n)
	{
		if (*p == (char)c)
			return (p);
		p++;
		n--;
	}
	return (NULL);
}
