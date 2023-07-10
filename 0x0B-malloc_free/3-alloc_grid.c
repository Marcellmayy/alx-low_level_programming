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
	int **may;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	may = malloc(sizeof(int *) * height);

	if (may == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		may[x] = malloc(sizeof(int) * width);

		if (may[x] == NULL)
		{
			for (; x >= 0; x--)
				freeze(may[x]);

			freeze(may);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			may[x][y] = 0;
	}

	return (may);
}
