#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main()
{
	int x;

	for (x = 48; x < 58; n++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return 0;
}
