

/*
** Katzid src f lkher dyal dst bla ma tkhrej 3la dstsize.
** Katrje3 longueur li kanat ghadi twlli lstring.
*/


#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t dstsize)
{
	size_t	dst_len;
	size_t	index;
	size_t	i;

	dst_len = ft_strlen(d);
	index = 0;
	while (d[index])
		index++;
	i = 0;
	while (s[i] && (i + index + 1) < (dstsize))       /* +1 bach nkhelliw blassa l '\0' f nihayat string */           
	{
		d[index + i] = s[i];
		i++;
	}
	if (i < dstsize)                    /* had if n9dro n3tabroha ra zyda nichan nzido  \0 bla dak star dial if */           
	
	
		d[index + i] = '\0';

/* Return  */      


/* strlcat khas-ha trj3 lina tol dial dest + source kamlin,
 * machi ghir ch7al mn character tzado f dest.
 * Ila dstsize <= dst_len, kanst3mlo dstsize hit dest twila ktar mn l'espace disponible.
 * Ila dstsize > dst_len, kanst3mlo dst_len hit dest kamla dakhel l'espace, w kanzido tol dial source. */
	{
	if (dstsize <= dst_len)
		return (ft_strlen(s) + dstsize);
	else
		return (ft_strlen(s) + dst_len);
}