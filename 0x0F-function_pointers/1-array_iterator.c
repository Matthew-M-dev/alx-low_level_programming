#include "function_pointers.h"
/**
 * array_iterator - main entry
 * @array: input
 * @size: input
 * @action: input
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if ((action != NULL) && (array != NULL))
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
