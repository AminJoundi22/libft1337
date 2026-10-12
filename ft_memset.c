
/**
** ft_memset Kat3mr mémoire b nafs l9ima mtln A at3mr biha 5 mrat AAAAA.
** ft_memcpy Katcopyi mn source l destination.
*/



void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}