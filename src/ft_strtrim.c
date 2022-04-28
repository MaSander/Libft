/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 19:51:15 by msander-          #+#    #+#             */
/*   Updated: 2022/04/28 22:16:46 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t trimmedlen;

	if(!s1 || !set)
		return (NULL);
	while(*s1 && ft_strchr(set, *s1))
		s1++;
	trimmedlen = ft_strlen(s1);
	while(trimmedlen && ft_strchr(set, s1[trimmedlen]))
		trimmedlen--;
	return (ft_substr(s1, 0, trimmedlen + 1));
}
