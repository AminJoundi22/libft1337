/*
** Kat9aren awel n caractères bin jouj strings.
** Katrje3 lfar9 ila kayn, sinon katrje3 0.
*/




int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t	i;

    if (n == 0)
        return (0);
    i = 0;
    while (i < n  && s1[i]  && s1[i] == s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);

    // unsigned char: kaykhlli values > 127 matwlich négative.
// Exemple: 200 ila char signed t9dr twli -56,
// donc kan7awlo s1[i] w s2[i] l unsigned bach n9arnohom mn 0 l 255.
}
