#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *  Return: If big endian - 0.
 *          If little endian - 1.
 */
int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return ((int)test[0]);
}
