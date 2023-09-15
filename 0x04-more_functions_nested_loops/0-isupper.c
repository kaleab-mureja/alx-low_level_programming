#include "main.h"

/** 
 * _isupper - checks whether character is an upper case letter
 * @c: character to be checked 
 * Description: checks whether character is an upper case letter 
 * Return: int
 */

int _isupper(int c) {
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	return(0);
}
