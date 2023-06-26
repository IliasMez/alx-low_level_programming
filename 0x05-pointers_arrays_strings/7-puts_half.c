#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, tail = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int i = 0, tail, len = 0;
if (str == NULL)
return;

while (str[i] != '\0')
{
len++;
i++;
}

tail = (len / 2);

if ((len % 2) == 1)
tail = ((len + 1) / 2);

for (i = tail; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
