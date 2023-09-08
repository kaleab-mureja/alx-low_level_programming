#include <stdio.h>

/**
	* main - prints alphabet
	* Description: print alphabet
	* Return: 0
*/

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		if (alphabet[i] == 'e' || alphabet[i] == 'q')
		{
			i++;
			continue;
		}
		putchar(alphabet[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
