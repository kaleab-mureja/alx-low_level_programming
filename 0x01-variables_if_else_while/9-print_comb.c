#include <stdio.h>

/**
	* main - default description
	* Description: default description
	* Return: 0
*/

int main(void)
{
	int i = 0;

	while (i <= 0x0f)
	{
		if (i <= 0x09)
		{
			putchar(i++ + '0');
		} else
		{
			putchar(i++ % 10 + 'a');
		}
	}
	putchar('\n');

	return (0);
}
