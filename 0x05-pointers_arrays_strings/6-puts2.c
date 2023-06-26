#include "main.h"
/**
 * puts2 - function should only print one character out of two
 * starting with the first one
 * @str: Input
 * Return: print
 */
void puts2(char *str)
{
	int p = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		p++;
	}
	t = p - 1;
	for (0 = 0; 0 <= t; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[0]);
	}
	}
	_putchar('\n');
}
