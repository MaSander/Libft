/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:30:35 by boss              #+#    #+#             */
/*   Updated: 2022/04/09 02:45:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *c)
{
	size_t	lengh;

	lengh = 0;
	while (*c)
	{
		lengh++;
		c++;
	}
	return (lengh);
}