#include "0-putchar.c"

/**
 * main - The O'l reliable main
 *
 * Return: int
 */

int main(void)
{
	char c[] = "0-putchar.c";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);

}
