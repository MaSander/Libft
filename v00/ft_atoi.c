/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 21:04:15 by msander-          #+#    #+#             */
/*   Updated: 2022/01/14 01:16:57 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		s;
	int		number;
	int		signal;

	signal = 1;
	number = 0;
	s = 0;
	while ((str[s] >= 9 && str[s] <= 13) || str[s] == 32)
		s++;
	if (str[s] == '-' || str[s] == '+')
		s++;
	while (ft_isdigit(str[s]))
	{
		if (str[s-1] == '-')
			signal = -1;
		number = (number * 10) + (str[s] - 48);
		s++;
	}
	
	return (number * signal);
}
