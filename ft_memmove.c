/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:31:48 by agoujdam          #+#    #+#             */
/*   Updated: 2022/10/29 04:16:11 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*srcc;
	size_t			i;

	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	if (!dest && !srcc)
		return (0);
	while (i < len && dst < src)
	{
		dest[i] = srcc[i];
		i++;
	}
	while (len-- && (!(dst < src)))
		dest[len] = srcc[len];
	return (dst);
}
