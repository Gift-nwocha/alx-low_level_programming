#include <stdio.h>
/**
 * main - Entry
 * Return: 0 no error
 */
int main(void)
{
	int i;
	char hexavalues[] = "012346789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexavalues[i]);
	}
	putchar('\n');
	return (0);
}
