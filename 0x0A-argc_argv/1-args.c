#include <stdio.h>
#include "main.h"

/**
 * main - main entry
 * @argc: input
 * @argv: input
 * Return: Always 0 (success)
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	int count = argc - 1;

	printf("%d\n", count);
	return 0;
}
