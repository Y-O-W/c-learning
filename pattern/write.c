/* Block comment: can span
   multiple lines. */
// Line comment: runs to the end of the line.
// int x = 5; // can also trail code

// Function - Write - Character
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Function - Write - String
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}