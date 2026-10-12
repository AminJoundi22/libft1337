
/*
** ft_striteri katapplique une fonction sur chaque caractere de la chaine
** originale sans creer une nouvelle chaine. Awalan katverifi ila s w f
** mahomch NULL, b3d katdour 3la kol caractere f la chaine. F kol iteration
** kat3ayet 3la la fonction f en passant l'indice (i) w l'adresse dial
** caractere (&s[i]) bach t9dr tbddlou directement. La chaine katb9a hia
** nafsha, ghi les caracteres dialha homa li kaytbdlou, w la fonction
** ma katrje3 hata valeur (void).
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
        /*
** hdi ra mkhtlfa hna 3tinah l adrees dial lcaractere bach t9dr tbddlou f la fonction f, ama dik strmapi kana darna copie jdida hia fin rj3na resultat 
ama hadi raknbdlo f string aslia dkchi 3lch khas n3tiwha indice o adreese dial kol harf mchi l7arff 
w hna kayn l'indice (i) li kay3ti lposition dial lcaractere f la chaine.
        */
        (*f)(i, &s[i]);   hdik &S[i]    // kat3ni l'adresse dial lcaractere 
        i++;
    }

	
}
