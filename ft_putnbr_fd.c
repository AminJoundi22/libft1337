/*
** ft_putnbr_fd katktb nombre entier f file descriptor li t3ta liha.
** Ila kan lnombre negatif katktb '-' w kat7awloh positif. B3d
** katsta3mel la recursion bach twssel l awal chiffre, w katktb
** kol chiffre b write mn lissar l limn. La fonction ma katrje3
** ta valeur (void).
*/




#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	nb = n;
    
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}

	if (nb >= 10)

		ft_putnbr_fd(nb / 10, fd);

	nb = (nb % 10) + '0';

	write(fd, &nb, 1);
}