// Check if the character is alphanumeric (A-Z, a-z, or 0-9).

// Returns 1 if c is an alphanumeric character, otherwise returns 0.

int	ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
        
    return (0);
}

