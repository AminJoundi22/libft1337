/*
** ft_strjoin katkhod juj strings (s1 o s2) o katjma3hom f wahed
** string jdida. Ma katbdlch lstrings l'asliyin, walakin katcrea
** wahed lcopie jdida f memory b malloc li fiha s1 moraha s2.
**
** Bash nkhdmo had fonction, awl haja kan7sbo tool dyal s1 o s2
** bach n3rfo ch7al mn byte khasna. Mn b3d kandiro malloc b size
** dyal juj strings + 1 bach nzido '\0'. Kanskho awlan ga3 l7orof
** dyal s1, w mn b3d kanskho s2 f nafs string jdida mn wara s1.
** F lakhir kanzido '\0' bach twli string s7i7a, o kanreturniw
** l'adresse dyal had string jdida.
*/






#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	j;

	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}