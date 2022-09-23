#include "main.h"

/**
 * *_strncat: concatenates each strings using most an inputted no of bytes from
 *  src
 * dest: the string to be appended upon
 * src: the string to be appended to dest
 * @n: the number of bytes from src to be ppended to dest
 * Return: return pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int cheta = 0, dest_len = 0;

	while (dest[cheta++])
		dest_len++;
	for (cheta = 0; src[cheta] && cheta < n; cheta++)
		dest[dest_len++] = src[cheta];
	return (dest);
}
