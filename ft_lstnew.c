/*
** ft_lstnew katcree une nouvelle node pour une linked list. Katalloci
** la memoire b malloc, b3d kat7et lcontent li t3ta liha f la node,
** w katinitialisi next b NULL hit mazal ma kaynach node mn ba3dha.
** F lakher katrje3 l'adresse dial had la nouvelle node.
*/


#include "libft.h"       /* hna */

t_list	*ft_lstnew(void *content)   /* hna had content ra f parametre 3atin kipointi 3Lq Whd content  */
{
	t_list	*new;        /* db had t list hia type dial dik noeud li fiha content o next adress pointer  */

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;  /* hna ra dak content 3tinah DKCHI LI  kiponti 3lih dak lparametre dialna  */
	new->next = NULL;
	return (new);
}
