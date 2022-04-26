/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:55:39 by msander-          #+#    #+#             */
/*   Updated: 2022/04/25 19:15:10 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_deciamichouselen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			strlen;
	long		num;
	int			isnegative;
	char		*result;

	num = n;
	isnegative = 0;
	if (num < 0)
	{
		isnegative++;
		num = (num * -1);
	}
	strlen = (ft_deciamichouselen(n) + isnegative);
	result = malloc(strlen + 1);
	if (!result)
		return (NULL);
	result[strlen] = '\0';
	if (isnegative)
		result[0] = '-';
	while (strlen-- > isnegative)
	{
		result[strlen] = ((num % 10) + '0');
		num = (num / 10);
	}
	return (result);
}
