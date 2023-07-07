#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0(success), 1(error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
