// Check if the character is an alphabetic letter (A-Z or a-z). 

// Returns 1 if c is an alphabetic character, otherwise returns 0.

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
        
	return (0);
}

