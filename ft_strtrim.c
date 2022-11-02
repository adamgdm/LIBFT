/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:35:24 by agoujdam          #+#    #+#             */
/*   Updated: 2022/10/31 13:04:53 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	index;
	int	len_set;

	i = 0;
	index = -1;
	len_set = ft_strlen(set);
	if (!s1[0])
		return (0);
	while (index != len_set)
	{
		index++;
		if (s1[i] == set[index])
		{
			index = -1;
			i++;
		}
	}
	return (i);
}

static int	ft_end(char const *s1, char const *set)
{
	int	i;
	int	index;
	int	len_set;

	i = ft_strlen(s1) - 1;
	index = -1;
	len_set = ft_strlen(set);
	if (!s1)
		return (0);
	while (index != len_set)
	{
		index++;
		if (s1[i] == set[index])
		{
			index = -1;
			i--;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	i = ft_start(s1, set);
	j = ft_end(s1, set);
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}
