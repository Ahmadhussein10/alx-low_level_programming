#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main()
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 65; i < 71; i++)
{
putchar(i);
}
putchar('\n');
return(0);
