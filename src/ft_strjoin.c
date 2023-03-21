/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander <msander@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 19:18:11 by msander-          #+#    #+#             */
/*   Updated: 2023/03/21 20:21:10 by msander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// old
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i1;
	int		i2;
	char	*str;
	
	//TODO introduzir sizeof

	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	str = ft_calloc((i1 + i2 + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, i1 + 1);
	ft_strlcat(str, s2, (i2 + i1 + 1));
	return (str);
}

// new
char	*_ft_strjoin(char *str1, char *str2)
{
	char	*result;
	int		len;

	len = ft_strlen(str1) + ft_strlen(str2);
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	while (*str1 != '\0')
	{
		*result = *str1;
		result++;
		str1++;
	}
	while (*str2 != '\0')
	{
		*result = *str2;
		result++;
		str2++;
	}
	*result = '\0';
	return (result - len);
}
