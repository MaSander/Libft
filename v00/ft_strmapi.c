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
	int		i;
	char	*result;

	result = malloc((int)ft_strlen(s) * sizeof(char));
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		result[i] = f(1, s[i]);
		i++;
	}
	return (result);
}
