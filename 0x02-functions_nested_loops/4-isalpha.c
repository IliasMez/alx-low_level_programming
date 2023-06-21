#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * 
 * Return: 1 if A is a letter, 0 otherwise
 */
int _isalpha(int A)
{
	return ((A >= 'a' && A <= 'z') || (A >= 'A' && A <= 'Z'));
}

