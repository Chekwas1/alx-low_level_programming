#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
