#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - main that prints a name
 * @name: char to print
 * @f: pointer function
 * Return - void (nothing)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
	 f(name);
}
