#include <stdio.h>
#include "function_pointers.h"
/**
 * main - main that prints a name 
 *
 * Return - void (nothing)
 */
void print_name(char *name, void (*f)(char *))
{
	 void (*f)(char *) = name;
}
