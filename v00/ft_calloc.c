/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:43:55 by msander-          #+#    #+#             */
/*   Updated: 2021/12/27 20:04:09 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t	*ptr;

	if ((num * size) == 1 && (num + size) != 2)
		return NULL;
	if (num == 0 || size == 0)
		return NULL;
	ptr = malloc(num * size);
	ft_bzero(ptr, num * size);
	return (ptr);
}