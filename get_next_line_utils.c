#include <stdio.h>
#include <stdlib.h>

const char	*is_newline(const char *contents)
{
	int	i;

	if (contents == NULL || *contents == '\0')
		return (NULL);
	i = 0;
	while (contents[i])
	{
		if (contents[i] == '\n')
			return (&contents[i]);
		i++;
	}
	return (NULL);
}
static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*line_extraction(const char *buffer, int *status)
{
	size_t	line_length;
	char	*line_copy;
	size_t	i;
	char	*newline_ptr;

	if (!buffer)
		return (NULL);
	newline_ptr = is_newline(buffer);
	line_length = 0;
	if (newline_ptr)
		line_length = newline_ptr - buffer + 1;
	else
		line_length = ft_strlen(buffer);
	line_copy = malloc(line_length + 1);
	if (!line_copy)
		return (NULL);
	i = 0;
	while (i < line_length)
	{
		line_copy[i] = buffer[i];
		i++;
	}
	line_copy[i] = '\0';
	*status = 1;
	return (line_copy);
}

char	*remainder_extraction(const char *buffer, int *status, size_t i)
{
	size_t	j;
	char	*remainder_line;

	if (!buffer || *buffer == '\0')
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		*status = 0;
		return (NULL);
	}
	remainder_line = malloc(ft_strlen(buffer) - ++i + 1);
	if (!remainder_line)
		return (NULL);
	j = 0;
	while (buffer[i + j])
	{
		remainder_line[j] = buffer[i + j];
		j++;
	}
	remainder_line[j] = '\0';
	*status = 1;
	return (remainder_line);
}

int main()
{




	
	// IS_NEWLINE TESTS
	//-----------------

    // const char  *FD;

    // FD = "Hello\nWorld";
    // printf("%s", FD);
    // printf("\n\nGives \n\n");
    // printf("%s\n\n", is_newline(FD));

    // FD = "\nHello";
    // printf("%s", FD);
    // printf("\n\nGives \n\n");
    // printf("%s\n\n", is_newline(FD));

    // FD = "NULL";
    // if (is_newline(FD))
    //     printf("%s\n", is_newline(FD));
    // else
    //     printf("No newline found\n");

	//--------------------
}