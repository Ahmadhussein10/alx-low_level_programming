#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char x[26] = "abcdefghijklmnopqrstuvwxyz";
char a[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0 ; i < 26 ; i++)
{
putchar(x[i]);
}
for (i = 26 ; i < 52 ; i++)
{
putchar(a[i]);
}
putchar('\n');
return (0);
}
~                  
