/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:09:18 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/04 13:00:17 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *cont)
{
	t_list	*drake;

	drake = (t_list *)malloc(sizeof(t_list));
	if (!drake)
		return (0);
	drake->content = cont;
	drake->next = NULL;
	return (drake);
}
