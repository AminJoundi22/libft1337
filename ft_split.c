


/*
** ft_split kat9sem string l plusieurs kelmat 7asb delimiter.
** Katcrea array dyal strings, kol element fih kelma wa7da,
** o f lakhir katzid NULL bach t3lm fin katsali larray.
*/




#include "libft.h"


/*
** count_words kat7seb ch7al mn kelma kayna f string.
** Kat9ra string caractere b caractere, o kol ma tl9a
** akher caractere dyal kelma katzid compteur b 1.
*/

static size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}


/*
** fill_tab katnskh kelma wa7da mn string l string jdida.
** Katbda mn awl caractere o katb9a katcopi 7ta tl9a
** delimiter wala '\0', o f lakhir katzid '\0'.
*/


static void	fill_tab(char *new, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
}


/*
** set_mem kat9sem string l kelmat, katdir malloc l kol kelma,
** o kat3ayet l fill_tab bach tnskh kol kelma f tab.
** F lakhir katzid NULL bach t3lm fin katsali larray.
*/

static void	set_mem(char **tab, char const *s, char c)
{
	size_t	count;
	size_t	index;
	size_t	i;

	index = 0;
	i = 0;
	while (s[index])
	{
		count = 0;
		while (s[index + count] && s[index + count] != c)
			count++;
		if (count > 0)
		{
			tab[i] = malloc(sizeof(char) * (count + 1));
			if (!tab[i])
				return ;
			fill_tab(tab[i], (s + index), c);
			i++;
			index = index + count;
		}
		else
			index++;
	}
	tab[i] = 0;
}

/*
** ft_split kat9sem string l plusieurs kelmat 7asb delimiter.
** Awl haja kat7seb ch7al mn kelma kayna, katdir malloc l tab,
** mn b3d kat3ayet l set_mem bach t3mer tab, o f lakhir
** katreturni larray li fiha ga3 lkelmat.
*/

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**tab;

	words = count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	set_mem(tab, s, c);
	return (tab);
}