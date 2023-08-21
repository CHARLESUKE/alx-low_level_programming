#include <unistd.h>

/**
 * _putchar - function that prints the standard output
 *
 * @c: character
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
