/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoujdam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:26:34 by agoujdam          #+#    #+#             */
/*   Updated: 2022/11/13 21:32:37 by agoujdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_free_it(t_list *b, void (*del)(void *))
{
	while (b)
	{
		del(b -> content);
		free(b);
		b = b -> next;
	}
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	if (!lst || !f || !del)
		return (0);
	else
	{
		a = ft_lstnew(f(lst -> content));
		b = a;
		if (!a)
			return (ft_free_it(b, del));
		lst = lst -> next;
		while (lst)
		{
			c = a;
			c -> next = ft_lstnew(f(lst -> content));
			a = a -> next;
			if (!(c -> next))
				return (ft_free_it(b, del));
			lst = lst -> next;
		}
	}
	return (b);
}
/*
void *f(void *str)
{
	return (str);
}

void del(void *str)
{
	ft_bzero(str, ft_strlen(str));
}

int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	t_list *lst;
	t_list *lll;

	char str[] = "II";
	char bs[] = "aa";

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	c = malloc(sizeof(t_list));
	lst = malloc(sizeof(t_list));

	a -> content = str;
	a -> next = b;
	b -> content = bs;
	b -> next = c;
	c -> content = "Boghdnan";
	c -> next = NULL;

	lst = ft_lstmap(a,f,del);
	lll = lst;

	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst -> next;
	}
	
	ft_free_it(lll, del);

	while (lll)
	{
		printf("%s\n", lst->content);
		lst = lst -> next;
	}

}*/
