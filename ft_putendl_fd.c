

/*
** ft_putendl_fd 3andha nafs role dial ft_putstr_fd, katktb chaine de
** caracteres f file descriptor. Lfar9 howa annaha katzid '\n' f lakher
** bach tmchi l ligne jdida. La fonction ma katrje3 ta valeur (void).
*/



#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, "\n", 1);
}