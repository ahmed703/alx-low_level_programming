#include "main.h"

/**
 * print_sign - prints the number sign
 * @n: The checked number
 * Return: 1 if it's positive and -1 for anything else
*/
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
