/*Difference entre malloc et calloc
** malloc reserve seulement une zone de memoire, mais son contenu reste
** non initialise (valeurs aleatoires).
** calloc reserve la memoire et initialise tous les octets a 0.
** Dans ft_calloc, on reproduit ce comportement avec malloc puis ft_bzero.
*/



/*
** ft_calloc katdir allocation dial mémoire b7al malloc, walakin
** lfar9 howa anha kat3mr ga3 lmémoire b 0. Katakhod jouj paramètres :
** count (ch7al mn élément) w size (taille dial kol élément), w kat7seb
** count * size bach t3rf ch7al mn byte khas t'alloua.
**
** Awel haja kanverifiw ila ma kaynch overflow f count * size, hit ila
** kanat natija kbira bzzaf t9dar twli valeur ghalta. Ila kayn overflow
** kanrj3o NULL.
**
** Ila kolchi mzyan, kan3ayto l ft_memalloc li katdir malloc l taille
** kamla, w mn b3d katst3ml ft_bzero bach tsfr ga3 lbytes dial lmémoire.
** Flekher, la fonction katrj3 l'adresse dial had lmémoire l'utilisateur.
*/


#include <limits.h> 
#include <stdint.h>

/*
** had include khtar whda fihom drnaha 3la wad dik SIZE_MAX bch N9adro n3rfo L9ima dialha
*/
#include "libft.h"

static void	*ft_memalloc(size_t size)   // darna static 7it hadi fonction li ghadi tkhddm ghir f had lfile, w ma bghinach chi wa7d y3ayet lih men barra.

                                        // dik size hia ch7al ch7al mn byte khas n allouwiw
{                                       // darn void * hikach had l fonction katrj3lina pointer m3rfinch type dialo hik had lfocntion t9dr tkhdam 3la ay type dial data swa char wla int wla array donc m3rfinch type ddyal pointer li radi trje3 lina
	
	
	void	*ptr;  // hda howa pointer li ghadi i pontina 3la mémoire li ghadi n alouwiw 


	ptr = malloc(size);  // hna kan3ayto l malloc bach n allouwiw lmémoire li bghina

	if (!ptr) 
		return (NULL); // hna rir kntestiw latkon malloc fachlat

	ft_bzero(ptr, size);

	return (ptr); // hna kanrj3o address dial lmémoire li allouwiw lina bach n9dro nst3mloha f ay wa7d type dial data.
}


void	*ft_calloc(size_t count, size_t size)  // db hdi hia fonction principale  f parametre dialha kayn count (ch7al mn élément) w size (taille dial kol élément), w kat7seb count * size bach t3rf ch7al mn byte khas t'alloua.
{
	if (size != 0 && count > (SIZE_MAX / size))   // hna bghina ntfadaw overflow matln 7na 3ndna size max =100 wlkin  count *size=120 donc hna kayn overflow donc khasna n3rfu ila kayn overflow wla la, ila kayn overflow kanrj3o NULL.
		return (NULL);                            // ra verifina size wch null rir hik an9smo 3lih

	return (ft_memalloc(count * size));  // sf ohna kan3ayto l ft_memalloc li katdir malloc l taille kamla, w mn b3d katst3ml ft_bzero bach tsfr ga3 lbytes dial lmémoire.
}