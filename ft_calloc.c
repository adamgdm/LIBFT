/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:01:02 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/13 23:43:34 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*space;
	size_t	total;

	i = 0;
	if (size == 0 || count == 0)
	{	
		count = 1;
		size = 1;
	}
	total = count * size;
	if (total / size != count)
		return (0);
	space = malloc(count * size);
	if (!space)
		return (0);
	while (i < total)
		space[i++] = 0;
	return (space);
}
