#include "main.h"
/**
 * swap_int - swap the values of 2 integers
 * @a: first argument to be swapped
 * @b: second argument to be swapped
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
