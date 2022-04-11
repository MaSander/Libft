/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander- <msander-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 22:28:25 by msander-          #+#    #+#             */
/*   Updated: 2022/01/13 07:57:19 by msander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

// void	old_version(char const *s, char c)
// {
// 	g_i = 0;
// 	g_x = 0;
// 	g_y = 0;
// 	g_clipping = malloc((int)ft_strlen(s) * sizeof(char));
// 	g_charger = malloc((int)ft_strlen(s) * sizeof(char));
// 	while ((int)ft_strlen(s) >= g_i)
// 	{
// 		if (s[g_i] == c || s[g_i] == 0)
// 		{
// 			g_charger[g_y] = malloc(g_x * sizeof(char));
// 			ft_memmove(g_charger[g_y], g_clipping, g_x);
// 			ft_memset(g_clipping, 0, g_x);
// 			g_x = 0;
// 			g_y++;
// 		}
// 		else
// 		{
// 			g_clipping[g_x] = s[g_i];
// 			g_x++;
// 		}
// 		g_i++;
// 	}
// 	//return (g_charger);
// }


char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	y;
	size_t	breaks;
	char	*clipping;
	char	**charger;

	i = 0;
	breaks = 1;
	while (s[i])
	{
		if (s[i] == c)
			breaks++;
		i++;
	}

	i = 0;
	y = 0;
	charger = malloc(breaks * sizeof(char));
	clipping = malloc((ft_strlen(s) - breaks) * sizeof(char));
	while (*s)
	{
		if (*s == c)
		{
			ft_memmove(charger[y], clipping, i);
			y++;
			i = 0;
		}
		else
		{
			clipping[i] = *s;
			i++;
		}
		s++;
	}
	charger[breaks ] = '\0';
	return (charger);
}
