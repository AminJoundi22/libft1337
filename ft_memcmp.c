
/*
** Kat9aren awel n octets bin jouj zones mémoire.
** Ila kayn far9 katrje3o, sinon katrje3 0.




Qaren byte b byte.

Ila l9iti ikhtilaf
    rje3 lfar9.

Ila salaw n bytes kamlin
    rje3 0.


*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))  // hdi ra byna kna chr7naha f ft_memchr.c
	{
		i++;
	}

	if (i < n)         // hna kntakdo bli mzl mkmlna n bytes w kayn far9 bin s1 w s2, donc rje3 lfar9 binhom.
	{
		return (*(unsigned char *)(s1 + i)
			- *(unsigned char *)(s2 + i));
	}
	
	return (0);     // ila salaw n bytes kamlin w ma kaynch far9, donc rje3 0.
}