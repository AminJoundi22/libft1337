/*hadchi li kadir 
** Parcourt toute la linked list.
** Applique la fonction f() au contenu de chaque node.
fhad l7ala l fonction ktrj3 lina l contenu dial kol noeud  
*/





#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		f(lst->content);
		lst = lst->next;
	}
}