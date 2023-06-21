#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

void print_fibonacci_numbers(void)
{
    unsigned long int bef1 = 1;
    unsigned long int bef2 = 2;
    unsigned long int l = 1000000000;
    unsigned long int aft1;
    unsigned long int aft2;
    unsigned long int i;

    printf("%lu", bef1);

    for (i = 1; i < 91; i++)
    {
        printf(", %lu", bef2);
	unsigned long int temp = bef1 + bef2;
        bef1 = bef2;
        bef2 = temp;
    }

    aft1 = (bef1 / l);
    aft2 = (bef1 % l);

    for (i = 92; i < 99; i++)
    {
        printf(", %lu", aft1 + (aft2 / l));
        printf("%lu", aft2 % l);
        unsigned long int temp1 = aft1 + bef1;
        bef1 = aft1;
        aft1 = temp1;
        unsigned long int temp2 = aft2 + bef2;
        bef2 = aft2;
        aft2 = temp2;
    }

    printf("\n");
}
