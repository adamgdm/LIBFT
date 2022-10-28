/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:57:53 by agoujdam          #+#    #+#             */
/*   Updated: 2022/10/28 00:51:28 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	ldst;
	size_t	lsrc;

	n = size;
	if (dst)
		ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (!size || size <= ft_strlen(dst))
		return (size + lsrc);
	while (*dst != '\0' && n--)
		dst++;
	while (n-- > 1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (lsrc + ldst);
}
