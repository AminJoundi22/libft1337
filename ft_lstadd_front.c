






#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)    /* f hadi bghina nzido noued flwl dkchi 3lach anmodifiw head donc anst3mlo 2 pointer  db dik  */
{
	if (!alst || !new)
		return ;  /* hna kantchekiw laykono khwin  */
	new->next = *alst;  /* hna awl hja dik noeud jdida kngololiha atpointi 3la dak li kan lheadd  */
	*alst = new;  /* ohdi raadi twli fiha adress jdida dial new */
}
