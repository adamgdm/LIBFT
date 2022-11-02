/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:09:18 by agoujdam          #+#    #+#             */
/*   Updated: 2022/10/31 17:10:28 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

t_list	*ft_lstnew(void *cont)
{
	t_list *Drake;

	Drake = (t_list *)malloc(sizeof(t_list));
	Drake -> content = cont;
	Drake -> next = NULL;
	return (Drake);
}
