/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:26:20 by msander-          #+#    #+#             */
/*   Updated: 2022/01/10 22:16:40 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	strlen;
	char	*result;

	strlen = (ft_strlen(s));
	result = malloc(strlen + 1);
	if (!result)
		return (NULL);
	result[strlen + 1] = '\0';
	i = 0;
	while (i < strlen)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
