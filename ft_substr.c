

/*
** ft_substr cree une nouvelle chaine de caracteres contenant une partie
** de la chaine originale. La fonction commence la copie a partir de
** l'index "start" et copie au maximum "len" caracteres. Si "start" est
** en dehors de la chaine, elle retourne simplement une chaine vide.
**
** Pour realiser cela, on commence par verifier si l'index de depart est
** valide. Ensuite, on ajuste la longueur demandee si elle depasse le
** nombre de caracteres restants dans la chaine. Une fois la taille
** finale connue, on alloue la memoire avec malloc pour creer une nouvelle
** chaine independante. Enfin, on copie les caracteres un par un, on
** ajoute le caractere de fin '\0' afin d'obtenir une vraie chaine C,
** puis on retourne le pointeur vers cette nouvelle chaine.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)  // awl hja darna unsigned int start 7it start ma t9drch tkoun négative hik katmatal position f strinf=g o position mymknch tkon negative 
{
	char			*new;   // hda howa pointer li ghadi i pontina 3la mémoire li ghadi n alouwiw
	unsigned int	i;       // index li ancopiw bih characters mn s l new

	if (start >= ft_strlen(s))     // had chart darnah bch ila kant start bara string cad kbira 3la longoueur dial string anrdo len =0 bch n3tiw string vide ""
		len = 0;


	else if (len > ft_strlen(s + start)) // had chart darnah mtln start kaynna wst strinw mtln wlkin mkyninch des caracteres kafiyin 9odam start, donc khasna n9lso len bach ma ncopyiwch characters li ma kaynach f string. donc knrdo len  egale dkchi li b9a bdbt 9dam start
		len = ft_strlen(s + start);  // mtln klmat aminjo o start katchir l n donc 9dam start B9at rir jo donc dik ft_strlen(s + start) katrje3 lina 2 o len kaywli 2 odonc kncopiw rir dok 2 a7rof


	new = malloc(sizeof(char) * (len + 1));  // Db hna fin ankpiw o dik +1 3la wad \0

	if (!new)
		return (NULL); 


	i = 0;
	while (start + i < ft_strlen(s) && i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
    
	return (new);
}