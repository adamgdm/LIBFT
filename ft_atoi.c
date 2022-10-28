/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:10:42 by agoujdam          #+#    #+#             */
/*   Updated: 2022/10/27 12:02:26 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long double	result;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		result = result * 10 + str[i++] - '0';
	result *= sign;
	if (!(result < 9223372036854775807))
		return (-1);
	else if (!(result >= -9223372036854775807))
		return (0);
	return (result);
}
/*
int main()
{
	printf("%d", ft_atoi("\001 2"));

}*/
