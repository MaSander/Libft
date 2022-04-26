/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 20:24:26 by msander-          #+#    #+#             */
/*   Updated: 2022/04/25 19:14:32 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	int		ssize;

	ssize = ft_strlen(s) + 1;
	newstr = ft_calloc(ssize, sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s, ssize);
	return (newstr);
}
