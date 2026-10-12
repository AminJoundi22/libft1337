/*
** ft_lstnew katcree une nouvelle node pour une linked list. Katalloci
** la memoire b malloc, b3d kat7et lcontent li t3ta liha f la node,
** w katinitialisi next b NULL hit mazal ma kaynach node mn ba3dha.
** F lakher katrje3 l'adresse dial had la nouvelle node.
*/


#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}