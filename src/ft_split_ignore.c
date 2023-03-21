/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_ignore.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msander <msander@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:22:13 by msaner-           #+#    #+#             */
/*   Updated: 2023/03/21 20:21:24 by msander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_slices_ign(char const *s, char c, char ign)
{
	size_t	slices;
	int		flag;

	slices = 0;
	flag = -1;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			slices++;
		while (*s)
		{
			if (*s == ign)
				flag = flag * -1;
			if (*s == c && flag < 0)
				break ;
			s++;
		}
	}
	return (slices);
}

static int	slice_len(char *s, char c, char ign)
{
	size_t	slices;
	int		index;
	int		flag;

	slices = 0;
	index = 0;
	flag = -1;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (s[index] != '\0')
			slices++;
		while (s[index])
		{
			if (s[index] == ign)
				flag = flag * -1;
			if (s[index] == c && flag < 0)
				return (index);
			index++;
		}
	}
	return (index);
}

static void	ft_slices_ignore(char **splited, char *s, char c, char ign)
{
	size_t	index;
	size_t	position;
	size_t	len;

	position = 0;
	len = ft_count_slices_ign(s, c, ign);
	while (len)
	{
		while (*s == c)
			s++;
		index = slice_len(s, c, ign);
		if (index)
		{
			if (*s == ign)
				splited[position] = ft_substr(s + 1, 0, index - 2);
			else
				splited[position] = ft_substr(s, 0, index);
			position++;
			s = s + index;
		}
		len--;
	}
	splited[position] = NULL;
}

char	**ft_split_ignore(char *s, char c, char ign)
{
	char	**splited;
	int		slices;

	if (!s)
		return (NULL);
	slices = ft_count_slices_ign(s, c, ign);
	splited = malloc((slices + 1) * sizeof(char *));
	if (!splited)
		return (NULL);
	ft_slices_ignore(splited, s, c, ign);
	return (splited);
}
