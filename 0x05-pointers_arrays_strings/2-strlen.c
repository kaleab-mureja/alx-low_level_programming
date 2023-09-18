nclude "main.h"

/**
 * 	* _strlen - gives length of string
 * 		* @s: pointer to character array
 * 			* Description: gives length of string
 * 				* Return: int
 * 				*/
int _strlen(char *s)
{
		int i = 0;

			while (*(s + i) != '\0')
					{
								i++;
									}
				return (i);
}
