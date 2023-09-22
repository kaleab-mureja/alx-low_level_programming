#include "main.h"

/**
 * _strncpy - Copies a string, using at most n bytes from src.
 * If the length of src is less than n, additional null bytes are
 * to ensure that a total of n bytes are written.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Number of bytes to use.
 *
 * Return: Pointer to destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int byteCount;

	for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
		dest[byteCount] = src[byteCount];

	for (; byteCount < n; byteCount++)
		dest[byteCount] = '\0';

	return (dest);
}
