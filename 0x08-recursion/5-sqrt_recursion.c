#include "main.h"
/**
 * _sqrt_recursion - evaluate function sqrt
 * @n: integer
 * Return: sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	int i = 0;

		if (i < 0)
			return (-1);
		else
			return (_evaluate(i, n));
}
