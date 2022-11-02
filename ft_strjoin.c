/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:47:53 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/02 11:40:17 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total;
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	k = ft_strlen(s1);
	total = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * total + 1);
	if (!str)
		return (0);
	while (i < total)
	{
		while (i < k)
			str[i++] = s1[j++];
		j = 0;
		while (i < total)
			str[i++] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}
