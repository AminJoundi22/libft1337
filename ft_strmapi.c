// db had ft strmapi katkhdlina string s o kat3tina string jdida had string jdida tbdlat bsbab fonction f li katakhod

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)) // awl hja darna char (*f)(unsigned int, char) 7it f hiya fonction li katrje3 char w katakhod 2 parametre: unsigned int (index) w char (caractere) hdi katsma fontion pointer
{
	
	size_t	i;     // hda howa index i                                                // f howa smit pointer li kaypointi 3la fonction  ohdi  char (*f) had char li 9bal f kat3ni bli had fonction katrj3lina char
	char	*new;  	// had new hiya string jdida li ghadi ncreaw f memory o katrje3 lina lfonction

	new = malloc(sizeof(char) * (ft_strlen(s) + 1));  // darnaliha allocation dyal memory b malloc 
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);     // hda howa aham star kat3ni bli f kol caractere mn string s 3ti  ldik f li katpoiti 3la l fonction 3tiha index li w9f 3lih dik sa3a o 3tiha caractere hik hia kima glna katkhd 2 parametre 3tihomliha bjoj donc hia kol caractere f string atb9 3lih dik lkhdma dial la fonction 
		i++;
	}
	new[i] = '\0';
	return (new);      // sf hna katrj3lina strinf jdida li type dialha char
}