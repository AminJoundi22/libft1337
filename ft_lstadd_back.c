
/*
** ft_lstadd_back :
**
** Katzid node "new" f akher linked list.
**
** 1. Katchek ila new kayna.
**
** 2. Ila list khawya, new katwlli awel node.
**
** 3. Sinon, katjib akher node b ft_lstlast().
**
** 4. Katrbt akher node m3a new (last->next = new).
*/



#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	if (*alst)
		ft_lstlast(*alst)->next = new;
	else
		*alst = new;
}