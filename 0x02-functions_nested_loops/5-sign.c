#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @number: var
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int number)
{
	if (number > 0)
	{
		_putchar(43);
		return (1);
	} else if (number == 0)
	{
		_putchar(48);
		return (0);
	} else if (number < 0)
	{
		_putchar(45);
	}
		return (-1);
}

