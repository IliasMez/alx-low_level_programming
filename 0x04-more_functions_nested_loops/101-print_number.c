#include "main.h"

/**
 * print_number - prints an integer
 * @number: integers to be printed
 */
void print_number(int number)
{
unsigned int n1;

if (number < 0)
{
n1 = -number;
_putchar('-');
}
else
{
n1 = number;
}

if (n1 / 10)
{
print_number(n1 / 10);
}

_putchar((n1 % 10) + '0');
}
