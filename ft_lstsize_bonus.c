/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:01:10 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/04 13:01:40 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*a;

	a = lst;
	count = 0;
	if (a)
	{
		count++;
		while (a->next != '\0')
		{
			a = a->next;
			count++;
		}
	}
	return (count);
}
