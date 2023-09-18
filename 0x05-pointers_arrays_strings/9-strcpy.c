nclude "main.h"

/**
 * 	* _strcpy - copies a string and puts it into another string
 * 		* @dest: destination string
 * 			* @src: source string
 * 				* Description: copies a string and puts it into another string
 * 					* Return: char
 * 					*/
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
