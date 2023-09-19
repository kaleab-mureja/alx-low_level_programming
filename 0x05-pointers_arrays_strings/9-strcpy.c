#include "main.h"

/**
 * _strcpy - Copies a string and puts it into another string.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Description: Copies a string and puts it into another string.
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = *(src + i);

	return (dest);
}
