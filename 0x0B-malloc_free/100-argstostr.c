#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: integer
 * @av: array of character pointers (strings)
 *
 * Returns: Pointer to a new string
 */
char *argstostr(int ac, char **av)
{
    int i, n, r = 0, l = 0;
    char *str;

    if (av == NULL || ac == 0)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        for (n = 0; av[i][n]; n++)
            l++;
    }

    l += ac;

    str = malloc(sizeof(char) * (l + 1));
    if (str == NULL)
        return NULL;

    r = 0;

    for (i = 0; i < ac; i++)
    {
        for (n = 0; av[i][n]; n++)
        {
            str[r] = av[i][n];
            r++;
        }
        str[r] = '\n';
        r++;
    }

    str[r] = '\0'; 

    return str;
}

