#include "libft.h"

/*
** Had lfonction kat7seb ch7al mn caractere khas lnombre
** bach n9dro nallociw taille s7i7a dial la chaine.
*/

static int	ft_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}


/*
** ft_itoa kat7awel nombre men type int l chaine de caracteres.
** Awalan kat7seb ch7al mn caractere ghadi t7taj lnombre (m3a '-' ila kan
** negatif), b3d katalloci la memoire b malloc. Men b3d kat7ot '\0' f akhir
** chaine, ila kan lnombre negatif katzid '-' f lwel w kat7awloh positif.
** F lakher kat3mer la chaine men llekher llowel b kol chiffre b isti3mal
** modulo (%) w division (/), w katrje3 la chaine li tsaybat.
*/

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;

	len = ft_len(nb);

	str = malloc(sizeof(char) * (len + 1));

	if (!str)
		return (NULL);

	str[len] = '\0';

	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}

  
    /*
** Ila str[0] == '-' ➜ katrj3 1.
    Ila ma kaynch - ➜ katrj3 0.
*/

	while (len-- > (str[0] == '-'))
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}

	return (str);
}