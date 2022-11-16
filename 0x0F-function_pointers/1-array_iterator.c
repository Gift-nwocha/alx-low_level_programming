#include "function_pointers.h"

/**
 * array_iterator - executes a functiuon given as a
 * parameter on each element of an array
 * @array: input integer array
 * @action: pointer to the fucntion
 * @size: size of thre array
 *
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
