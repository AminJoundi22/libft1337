/**
**
Sir mn byte 0 7ta n-1

Ila l9iti c
    rje3 l'adresse dyalo

Ila sala lloop
    rje3 NULL 
*/



/*
** Kat9lb 3la awal occurrence dyal c f awel n octets.
** Ila l9aha katrje3 pointer, sinon katrje3 NULL.
*/


void	*ft_memchr(const void *s, int c, size_t n)  // hna ra darna void *  hikach had memchr t9dr tkhdam m3a ay tybe dial data swa char  wla int wla array donc m3rfinch type ddyal pointer li radi trje3 lina

{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)     	// db ndwiw 3la l casting db dik const void *s li hya katpointi 3la data 
		                                                     //m3rfinch type ddyalha donc kandiro lcasting l unsigned char * bach nfolo l 
															 //compiler t3amal m3aha 3la assas li hia unsigned char donc fblst mndiro *(s + i)  li hya katpointi 3la l data li kayna f s + i, kandiro *(unsigned char *)(s + i) bach n9arnoha m3a c li tahowa kndiroliha unsinged char c bach n9arnohom m3a b3diyat-hom ama dik najma li zayda 9bal l a9was fa dwr dialha tjib lina la valeur li kayna f dik l'adresse 
			return ((void *)s + i); :  // casting: s const void*, khasna void* bach ymatchi return hik return fonction katrj3lina void*
		i++; 
	}
	return (NULL);
}