/*
** Supprime toute la linked list.
** Utilise ft_lstdelone() pour libérer chaque node.
** À la fin, le pointeur de la liste est mis à NULL.
*/



#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}