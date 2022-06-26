#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it recieves
 * @argc: argument counter
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
