/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:22:55 by agoujdam          #+#    #+#             */
/*   Updated: 2022/10/26 13:31:17 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*result;
	int		i;
	int		j;

	str = (char *)s;
	i = ft_strlen(str);
	j = 0;
	result = malloc((sizeof(char) * (i + 1)));
	if (!result)
		return (0);
	while (str[j])
	{
		result[j] = f(j, str[j]);
		j++;
	}
	result[i] = '\0';
	return (result);
}
