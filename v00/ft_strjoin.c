/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 19:18:11 by msander-          #+#    #+#             */
/*   Updated: 2022/01/13 04:36:52 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i1;
	int		i2;
	char	*str;

	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	str = ft_calloc((i1 + i2 + 1), sizeof(char));
	ft_strlcpy(str, s1, i1 + 1);
	ft_strlcat(str, s2, (i2 + i1 + 1));
	return (str);
}
