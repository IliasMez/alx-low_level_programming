#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int len = 0;
int end = 0;
char *p = str;
int i;
if (p == NULL)
return;

while (*p != '\0')
{
p++;
len++;
}
end = len - 1;
for (i = 0 ; i <= end ; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
