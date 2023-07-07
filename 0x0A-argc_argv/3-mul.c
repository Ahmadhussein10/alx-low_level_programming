#include <stdlib.h>
/**
 * main-print sum of 2 numbers
 * @agrc:number of commandline.
 * @argv:pointer to an array pf command line.
 * return:0 success, 1 fail
 */
int main(int argc, char *argv[])
{
	int sum;
	if (argc == 3)
{
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
}
	else
{
	printf("error\n");
	return (1);
}
	return (0);
}
