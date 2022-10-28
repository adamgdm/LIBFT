/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:19:52 by agoujdam          #+#    #+#             */
/*   Updated: 2022/10/27 14:22:55 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(s) - 1;
	if ((unsigned char)c == '\0')
		return (str + i + 1);
	while (i >= 0 && str[i])
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i--;
	}
	if (!c)
		return (str + i);
	return (0);
}
