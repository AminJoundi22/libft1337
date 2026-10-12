

// Check if the character is printable. z3ma kitktb ama dok \n okda la mkitktoboch kitb9o 
// Returns 1 if c is a printable ASCII character, otherwise returns 0.
int	ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
        
    return (0);
}
