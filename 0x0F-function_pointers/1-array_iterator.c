#include "function_pointers.h"
/**
 * array_iterator - function given as a parameter on each element of an array
 * @size: is the size of the array
 * @array: array
 * @action: is a pointer to the function you need to use
 * Return - nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || action == 0)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
