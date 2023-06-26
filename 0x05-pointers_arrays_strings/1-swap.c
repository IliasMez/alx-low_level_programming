#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: input
 * @b: input
 * Return: value swaps
 */
void swap_int(int *a, int *b)
{
int aide;

aide = *a;
*a = *b;
*b = aide;
}
