

/*
** ft_strnstr :
**
** Kat9lb 3la string "needle" dakhel string "haystack",
** walakin ghir f awel "len" caractères.
**
** 1. Ila needle khawya (""), katrje3 bidayt haystack.
**
** 2. Kanmchi b i caractère b caractère f haystack.
**
** 3. Kol mara kanbda n9aren needle mn awalha b compteur j.
**
** 4. Ila l7orof kaytchabho, kanzid j 7ta nkml needle
**    w ma nfotch len.
**
** 5. Ila wslt l nihaya dyal needle ('\0'),
**    rah l9inaha kamla, kanrje3 pointer 3la blassa
**    li bdat mnha f haystack.
**
** 6. Ila salina haystack w mal9inach needle,
**    kanrje3 NULL.
*/



char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
    size_t	j;

    if (!*needle)
        return ((char *)haystack);
    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {
            if (needle[j + 1] == '\0')
                return ((char *)haystack + i);
            j++;
        }
        i++;
    }
    return (NULL);
}