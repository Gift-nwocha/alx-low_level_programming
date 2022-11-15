#include <unstid.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on sucess 1
 * on error, -1 is returned, and error is set appopraitely
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
