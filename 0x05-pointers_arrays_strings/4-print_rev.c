#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int len = 0;
int last;

while (*s != '\0')
{
len++;
s++;
}
s--;
for (last = len; last > 0; last--)
{
_putchar(*s);
s--;
}

_putchar('\n');
}

