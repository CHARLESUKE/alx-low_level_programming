#include "main.h"

/**
 * main - function that prints _putchar and
 * terminates when done
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
