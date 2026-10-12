/*
** ft_lstsize kat7seb ch7al mn node kaynin f linked list.
** Katbda mn awal node, w katdour 3la kol node b isti3mal
** lst = lst->next. F kol mara katzid 1 f compteur 7ta
** twssel l NULL, b3d katrje3 3adad dyal les nodes.
*/



#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}