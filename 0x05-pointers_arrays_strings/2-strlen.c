#include "main.h"

/**
	* _strlen - Gives the length of a string.
	* @s: Pointer to a character array.
	*
	* Description: Gives the length of a string.
	* Return: Length of the string as an int.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
