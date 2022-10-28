/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:19:52 by agoujdam          #+#    #+#             */
/*   Updated: 2022/10/27 14:20:58 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		lsrc;
	char	*str;

	str = (char *)s;
	i = 0;
	lsrc = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (str + lsrc);
	while (i <= lsrc && str[i])
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	if (!c)
		return (str + i);
	return (0);
}
