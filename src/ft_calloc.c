/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander <msander@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:43:55 by msander-          #+#    #+#             */
/*   Updated: 2023/03/21 20:18:49 by msander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	size_alloc;

	size_alloc = num * size;
	if (((size_alloc / size) != num) || ((size_alloc / num) != size))
		return (NULL);
	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	size = 0;
	num = num * size;
	while (num--)
	{
		((unsigned char *)ptr)[size] = 0;
		size++;
	}
	return (ptr);
}
