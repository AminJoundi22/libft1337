
/*
** ft_lstdelone :
**
** Kat7yed node wa7da mn linked list.
**
** 1. Katchek ila node kayna.
** 2. Ila kayna fonction del, kat7yed biha content.
** 3. F lakhir katfree l node nafsha.
**
** Ma kat7yedch next node.
*/





#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;

	if (del)
		del(lst->content); /* hdi hia li kathydlina content dial
         noeud o mnb3d kndiro l free noeud kmla */

	free(lst);
}


/*
hdi rir drtha bch t3rf l fonction del li kat7ayd 
l content ama ml mfrod mndirhach ndirha f main bch ntesti sf 
*/

void	del(void *content)
{
	free(content);
}