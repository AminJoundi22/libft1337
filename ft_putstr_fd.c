/*
** ft_putstr_fd katktb chaine de caracteres kamla f file descriptor
** li t3ta liha. Awalan katverifi ila la chaine ma hiach NULL, b3d
** katdour 3la kol caractere f la chaine w katktbo b write f
** destination li kay7eddha fd (stdout, stderr aw fichier). La
** fonction katsali mlli katl9a '\0', w ma katrje3 ta valeur (void).
*/






#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}