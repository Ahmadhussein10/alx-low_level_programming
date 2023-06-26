#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	for (s = 1; *s != '\0'; s++)
	{
		len = len + 1;
	}

	return (len);
}

