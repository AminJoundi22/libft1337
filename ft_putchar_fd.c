

/*
** ft_putchar_fd katktb caractere wahed f destination mo3ayana b isti3mal
** write. Lparametre fd (file descriptor) howa numero kay7edded fin ghadi
** ytmktb had lcaractere : 0 = stdin (lecture men clavier), 1 = stdout
** (l'ecran/terminal), 2 = stderr (messages d'erreur), w y9dr ta ykoun
** descriptor dial fichier maftou7 b open(). Hna write katsift lcaractere
** l destination li kaychir liha fd, w la fonction ma katrje3 ta valeur
** (void) hit ghi katktb lcaractere.
*/


#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}