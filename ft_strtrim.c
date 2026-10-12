
/*
** ft_strtrim katcrea wahed string jdida mn s1, walakin kat7yed
** ga3 l7orof li kaynin f set ghir mn lbdya o mn lnihaya dyal
** string. Ila kan chi caractere mn set f wast string, makayt7yedch,
** hit had fonction kattrimi ghir les extremites.
**
** Bash nkhdmo had fonction, awl haja kandiro fonction msa3da
** katchek wach wahed lcaractere kayn f set. Mn b3d kanbdaw
** mn lbdya dyal s1 o kanzido start tant que lcaractere kayn
** f set. Mlli kanl9aw awl caractere li machi f set, kanw9fo.
**
** Tani mar7ala, kanbdaw mn akher string o kan9ssso end tant
** que lcaractere lakher kayn f set. Mlli kanl9aw akher
** caractere li machi f set, kanw9fo.
**
** F lakhir, mlli kan3rfo fin katbda lpartie li bghina o fin
** katsali, kan3yto l ft_substr bach tcrea wahed copie jdida
** b malloc, katnskh ghir had lpartie, katzid '\0', o
** katreturni l'adresse dyal had string jdida.
*/







#include "libft.h"




static int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}



/*
** hdi rahia dial focntion li 9bl nfsha rir hik mn9droch ndkhloha nichankhasni n3awd nktbha ama lakan axe dialha ndirha nichan mhm
*/


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	if (start >= ft_strlen(s))
		len = 0;


	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);


	new = malloc(sizeof(char) * (len + 1));

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





char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_isset(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}