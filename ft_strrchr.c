/*
** Kat9lb 3la akher occurrence dyal c f string.
** Ila l9atha katrje3 pointer, sinon katrje3 NULL.
Bda mn lkher dyal string.

Sir l9dam.

Ila l9iti c
    rje3 l'adresse dyalo.

Ila ma l9itihch
    rje3 NULL.
*/







#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
if (!s)           // Kancheckiw wach s maشي NULL.
		return (NULL);

	i = ft_strlen(s);     //Kan7sbo longueur dyal string، w kan7ettoha f i.
	while (i >= 0)
	{
		if (s[i] == (char) c)   // casting: c int, 7wlna-ha l char bach n9arnoha m3a *s

			return ((char *) s + i);  // casting const char * → char * bach ymatchi m3a return type.
			// dik +i katdir l'adresse dyal s + i, li hiya l'adresse dyal l'char li kaymatchi m3a c.
		i--;
	}
	return (NULL);
}