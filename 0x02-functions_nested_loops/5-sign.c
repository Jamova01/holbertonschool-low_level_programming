#include "main.h"
/**
 * print_sign - C function that prints the sign of a number
 * @n: number that will be checked
 * Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
return (0);
}
