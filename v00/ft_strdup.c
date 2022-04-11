/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 20:24:26 by msander-          #+#    #+#             */
/*   Updated: 2022/01/04 21:16:50 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	while (s[i])
	{
		newstr[i] = s[i];
		i++;
	}
	return ((char *)newstr);
}
