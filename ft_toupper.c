/*
** ft_toupper :
**
** Kat7awwel lettre minuscule (a-z) l majuscule (A-Z).
**
** 1. Katchek wach c bin 'a' w 'z'.
**
** 2. Ila kan lettre minuscule, katna9s 32
**    (hit lfar9 f ASCII bin a/A howa 32).
**
** 3. Ila machi lettre minuscule,
**    katrje3 c kif ma howa.
*/



---
int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}