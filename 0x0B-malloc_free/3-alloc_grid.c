#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **point;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	point = malloc(sizeof(int *) * height);

	if (point == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		point[a] = malloc(sizeof(int) * width);

		if (point[a] == NULL)
		{
			for (; a >= 0; a--)
				free(point[a]);

			free(point);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			point[a][b] = 0;
	}

	return (point);
}

