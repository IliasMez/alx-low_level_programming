#include "main.h"

/**
 * print_array - s function that prints n elements of an array
 * @s: array name
 * @nbr: is the number of elements OF the array to be printed
 * Return: s and nbr inputs
 */
void print_array(int *s, int nbr)
{
int i;

for (i = 0; i < (nbr - 1); i++)
{
printf("%d, ", s[i]);
}
if (i == (nbr - 1))
{
printf("%d", s[nbr - 1]);
}
printf("\n");
}
