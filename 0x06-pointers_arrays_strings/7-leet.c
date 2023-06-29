#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 *
 * @str: check string
 *
 * Return: return ptr
*/

char *leet(char *str)
{
	char *ptr = str;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (ptr);
}
