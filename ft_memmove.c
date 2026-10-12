/*
** Memmove katcopyi data mn source l destination.
** Ila src w dst kaytchabkou (overlap), katcopyi mn jiha li ma tkhserch ldata.
*/


/*
** Katcopyi data b7al memcpy.
** Walakin kat3alj 7alat overlap bla ma tkhser ldata.
*/




/*
** ila  dst > src    mn lakhir llwel
** ila dst < src     mn lwel lakhir
*/


void	*ft_memmove(void *dst, const void *src, size_t len) // knchfofo bli hadi katrj3 void donc t9dr tkhdm l ayn nw3 dial data  swa char wla int wla array donc m3rfinch type ddyal pointer li radi trje3 lina
{                                                           // dak len howa 3adad les bytes li radi ncopyiw mn src l dst
	
	long	i;   // 3Lach darna long hna? 7it ila drna size_t wla unsigned int, ila kan len = 0, i = len - 1, w hna ghadi t9dr t9l9 lina lprogram hit size_t wla unsigned int ma kaynch fih lvaleur négative donc ila drna i = len - 1 w len = 0, i ghadi twli valeur kbira bzaaf w hna ghadi t9l9 lina lprogram.

	if (dst < src)    // hna kn9rno les addresse dyal dst w src, ila dst < src
	{
		i = 0;
		while ((size_t)i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i); //hna kanbdaw n copiw mn lwal lakhar hta lakhir, hit ila dst < src, ma kaynch overlap donc ma kaynch mouchkil.
			i++;
		}
		return (dst); // hna fonction katrj3 lina dst hdchi li mtlob 
	}
	else
	{
		i = len - 1;  // hna kanbdaw n copiw mn lakhir lwal, hit ila dst > src, kayn overlap donc khasna nbdaw mn lakhir bach ma tkhserch ldata.
		while (i >= 0)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i--;
		}
		return (dst);
	}
}