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

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	strlen;
	char	*result;

	if (!s || !f)
		return (NULL);
	strlen = ft_strlen(s);
	result = ft_calloc(strlen + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < strlen)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
