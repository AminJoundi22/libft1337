





int	ft_atoi(const char *str)  // atoi jaya mn "ASCII to integer" yani kat7awwel string li fih digits l integer. MTLN ila 3tina "123" rje3 lina 123.
{                    // Odik int kima glna kn3tiwha string fiha ra9m o ktrj3 lina ra9m dkchi lach drna valeur retour int 
	
	
	int		nbr;     //hada ankhzno fih ra9m anbniw
	int		sign;    // hada ankhzno fih sign dyal ra9m, ila kan positif wla negatif
	size_t	i;       // hda howa index dial string

	nbr = 0;
	sign = 1;    // kanbdaw b sign positif
	i = 0;
	 
	while (str[i] == ' ' ||  (str[i] >= '\t'  &&  str[i] <= '\r') ) // HNA kanskipiw lspaces o ga3 dkchi bin \t tal \r
		i++;

	if (str[i] == '+') // ila l9ina + nkmlo 
		i++;

	else if (str[i] == '-') // l7ala ila l9ina - nbdlo sign lpositiv  w nkmlo
	{
		sign *= -1;
		i++;
	}
	while ( str[i] >= '0' && str[i] <= '9')  // hna ila kan caractere li w9fin 3lih howa digit (0-9) kanbdaw nbuildiw l integer f nbr
	{
		nbr = nbr * 10 + str[i] - '0';   // kandrbo f 10     /* Kanbniw nbr digit par digit : 0 -> 1 -> 12 -> 123 */
		i++;
	}
	return (nbr * sign);  // f lakhir kanrje3o nbr m3a sign dyalo, ila kan positif rje3 lina nbr, ila kan negatif rje3 lina -nbr. dkchi 3lach kndrbo f sign 
}