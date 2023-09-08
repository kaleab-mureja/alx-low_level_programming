#include <stdio.h>

/**
	* main - default description
	* Description: default description
	* Return: 0
*/

int main(void)
{

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;

	while (i >= 0)
	{
		putchar(alphabet[i]);
		i--;
	}
	putchar('\n');

	return (0);
}
