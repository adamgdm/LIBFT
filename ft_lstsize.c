#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list *adam; 
	int	count;
	
	count = 0;
	while (adam->next)
	{
		adam->next = lst->next;
		count++;
	}
	return (count);
}

int main()
{
	t_list *a;
	t_list *b;
	t-list *c;


}
