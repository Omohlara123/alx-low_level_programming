#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for code success
 */

int main(int argc, char **argv)
{
	int sum;

	for (sum = 0; sum < argc; sum++)
	{
		*argv[sum] = *argv[sum];
	}
	printf("%d\n", (sum - 1));
	return (0);
}
