#include "main.h"
/**
 * _strlen_recursion - returns the lenghth of the string
 * @s: the string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_rev_recursion(s + 1)); /*sum 1*/
}
