
/**
** Copie les n premiers octets de src vers dst.
** Les zones mémoire ne doivent pas se chevaucher.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);  // kima galna hna kant3mlo m3a les valeurs
		i++;
	}
	return (dst);
}