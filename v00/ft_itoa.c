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
	{
		count = count * -1;
		isnegative++;
	}
	while (count >= 1)
	{
		count = count / 10;
		i++;
	}
	result = malloc((i + isnegative + 2) * sizeof(char));
	result[i + isnegative + 2] = '\0';
	if (isnegative)
		result[0] = '-';
	count = 0;
	while (i >= 0)
	{
		result[i] = (n % 10) + '0';
		n = n / 10;
		count++;
		i--;
	}
	result[count + 1] = '\0';
	return (result);
}
