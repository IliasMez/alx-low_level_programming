#include <stdio.h>
#include <math.h>

/**
 * main - program that find the largest prime factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
long int number = 612852475143, largestPrimeFactor = -1, i;

while (number % 2 == 0)
{
largestPrimeFactor = 2;
number /= 2;
}

for (i = 3; i <= sqrt(number); i = i + 2)
{
while (number % i == 0)
{
largestPrimeFactor = i;
number = number / i;
}
}

if (number > 2)
largestPrimeFactor = number;

printf("%ld\n", largestPrimeFactor);

return (0);
}

