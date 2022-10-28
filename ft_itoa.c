/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:24:26 by agoujdam          #+#    #+#             */
/*   Updated: 2022/10/27 12:00:55 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_how_many_characters_in_that_shit(long n)
{
	size_t	count;

	if (n == 0)
		count = 1;
	else if (n < 0)
	{
		count = 2;
		n = n * -1;
	}
	else if (n > 0)
		count = 1;
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count + 1);
}

char	*ft_itoa(int m)
{
	char	*str;
	int		i;
	long	n;
	int		stop;

	n = m;
	stop = 0;
	i = ft_how_many_characters_in_that_shit(n);
	str = malloc(sizeof(char) * i);
	if (!(str))
		return (NULL);
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		stop = 1;
	}
	i--;
	str[i--] = '\0';
	while (i >= stop)
	{
		str[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
