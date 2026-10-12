

/*
** ft_strdup cree une nouvelle copie d'une chaine de caracteres.
** Elle commence par calculer la longueur de la chaine avec ft_strlen,
** puis alloue une nouvelle zone memoire avec malloc en reservant
** assez d'espace pour tous les caracteres ainsi que le caractere '\0'.
** Ensuite, elle copie la chaine caractere par caractere dans cette
** nouvelle zone memoire et retourne un pointeur vers cette copie.
** La chaine dupliquee est independante de la chaine originale.
*/




#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	i;

	new = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}