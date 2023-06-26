#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
char temp,*q=s;
while(*q!='\0')
{
	q++;
}
	q--;
	while(s<q)
{
	temp=*s;
	*s=*q;
	*q=temp;
	s++;
	q--;
}
}
