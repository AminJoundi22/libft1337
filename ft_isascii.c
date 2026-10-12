// Check if the value is a valid ASCII character (0-127).

// Returns 1 if c is within the ASCII range, otherwise returns 0.


int	ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
        
    return (0);
}
