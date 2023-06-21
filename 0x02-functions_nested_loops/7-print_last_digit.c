#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * 
 * Return: value of the last digit
 */
int print_last_digit(int number)
{
	int rest;

	if (number < 0)
	number = -number;

	rest = number % 10;

	if (rest < 0)
		rest = -rest;

	_putchar(rest + '0');

	return (rest);
}
