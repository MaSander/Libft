/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:55:39 by msander-          #+#    #+#             */
/*   Updated: 2022/01/14 01:14:28 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	int		isnegative;
	char	*result;

	i = 0;
	count = n;
	isnegative = 0;
	if (n < 0)
		isnegative++;
	while (count != 0)
	{
		count = count / 10;
		i++;
	}
	if (n == 0)
		i++;
	result = malloc((i + isnegative + 1));
	result[i + isnegative] = '\0';
	while (i-- >= 0)
	{
		count = (n % 10);
		if (count < 0)
			count = count * -1;
		result[i] = count + '0';
		n = n / 10;
	}
	if (isnegative)
	{
		ft_memcpy(result+1, result, ft_strlen(result));
		result[0] = '-';
	}
	return (result);
}
