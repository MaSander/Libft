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
	char	*newstr;
	int		ssize;

	ssize = ft_strlen(s);
	newstr = ft_calloc(1, (ssize + 1));
	ft_memcpy(newstr, s, ssize);
	return (newstr);
}
