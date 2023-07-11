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
	int **2D;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	2D = malloc(sizeof(int *) * height);
	if (2D == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		2D[x] = malloc(sizeof(int) * width);
		if (2D[x] == NULL)
		{
			for (; x >= 0; x--)
				free(2D[x]);
			free(2D);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			2D[x][y] = 0;
	}
	return (2D)
}
