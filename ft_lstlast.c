
/*
** Kat9lb 3la akher node f linked list.
** Katrje3 pointer 3lih, w NULL ila list khawya.



Ila list khawya

    return NULL

Tant que next ma kaynach NULL

    mchi l node li morak

Return akher node
*/








#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}