/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:33:38 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/01 13:04:54 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"
*/

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	lst = new;
}
