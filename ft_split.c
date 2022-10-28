/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:44:51 by agoujdam          #+#    #+#             */
/*   Updated: 2022/10/27 11:44:53 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (count);
}

static int	ft_actual_word(char const *str, char c, int wa)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
		{
			count++;
			if (count == wa)
				break ;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (i);
}

static int	ft_size(char const *str, char c, int wa)
{
	int	i;
	int	count;
	int	size;

	i = 0;
	count = 0;
	size = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
		{
			count++;
			if (count == wa)
			{
				while (str[i] != c && str[i++])
					size++;
				break ;
			}
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		w_total;
	int		wa;
	int		i;

	w_total = ft_word_count(s, c);
	wa = 1;
	i = 0;
	tab = malloc(sizeof(char *) * (w_total + 1));
	if (!tab)
		return (0);
	while (wa <= w_total)
	{
		tab[wa - 1] = ft_substr(s, ft_actual_word(s, c, wa), ft_size(s, c, wa));
		if (!tab[wa - 1])
			free(tab[wa - 1]);
		wa++;
	}
	tab[wa - 1] = NULL;
	return (tab);
}
