
/*
** Kat9lb 3la awal occurrence dyal c f string.
** Ila l9atha katrje3 pointer, sinon katrje3 NULL.
Si le caractère cherché est '\0', elle renvoie un pointeur sur le '\0'
*/




char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)     // casting: c int, 7wlna-ha l char bach n9arnoha m3a *s
            return ((char *)s);   // casting: s const char*, khasna char* bach ymatchi return hik return fonction katrj3lina char*
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return (NULL);
}
