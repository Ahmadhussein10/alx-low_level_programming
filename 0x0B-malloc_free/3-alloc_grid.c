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
	int **DD;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	DD = malloc(sizeof(int *) * height);
	if (DD == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		DD[x] = malloc(sizeof(int) * width);
		if (DD[x] == NULL)
		{
			for (; x >= 0; x--)
				free(DD[x]);
			free(DD);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			DD[x][y] = 0;
	}
	return (DD)
}
