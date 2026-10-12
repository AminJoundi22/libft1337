// Check if the character is a digit (0-9).

// Returns 1 if c is a digit, otherwise returns 0.

int	ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
        
    return (0);
}