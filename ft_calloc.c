/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:01:02 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/13 20:12:17 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	size_t	i;
	char	*space;

	i = 0;
	total = size * count;
	space = malloc(total);
	if (!space)
		return (0);
	while (i < total)
		space[i++] = 0;
	return (space);
}
