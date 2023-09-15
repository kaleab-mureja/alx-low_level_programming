#include "main.h"

void print_most_numbers(void)
{
	int i = 0;
	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i++ + '0');
	}
	_putchar('\n');
}
