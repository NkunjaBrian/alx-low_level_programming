#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Number of arguments.
 * @av: Array of character pointers (strings).
 *
 * Return: Pointer to a new string containing concatenated arguments,
 *         or NULL if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (av == NULL || ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}

	l += ac;

	str = malloc(sizeof(char) * (l + 1)); /* +1 for the null terminator */
	if (str == NULL)
		return (NULL);

	r = 0; /* Reset the r counter for string building */

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		str[r] = '\n'; /* Add newline character after each argument */
		r++;
	}

	str[r] = '\0'; /* Add null terminator at the end of the concatenated string */

	return (str);
}

