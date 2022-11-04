#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success, 1 Error
 */
int main(int argc, char *argv[])
{
	int x, multi = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (x = 1; x < argc; x++)
	{
		multi *= atoi(argv[x]);
	}
	printf("%d\n", multi);
	return (0);
}
