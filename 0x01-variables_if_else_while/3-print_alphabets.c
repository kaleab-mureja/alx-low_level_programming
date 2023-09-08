#include <stdio.h>
#include <ctype.h>

/**
	* main - print upper and lower case alphabet
	* Description: print upper and lower case alphabet
	* Return: 0
*/
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(alphabet[i++]);
	}

	i = 0;

	while (i < 26)
	{
		putchar(toupper(alphabet[i++]));
	}
	putchar('\n');

	return (0);
}
