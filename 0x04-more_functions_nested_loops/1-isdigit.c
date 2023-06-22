#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @ch: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int ch)
{
if (ch >= '0' && ch <= '9')
return (1);
else
return (0);
}

