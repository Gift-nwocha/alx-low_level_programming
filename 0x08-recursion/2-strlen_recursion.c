#include "main.h"
/**
 * _strlen_recursion - returns the lenghth of the string
 * @s: the string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strien_recursion(s + 1);
	}
