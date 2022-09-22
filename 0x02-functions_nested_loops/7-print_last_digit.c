#include "main.h"
/**
 * print_last_digit - C function that prints the last digit of a number
 * @n: Number that will be checked
 * Return: 0
 */
int print_last_digit(int n)
{
int lastDigit = n % 10;
if (lastDigit < 0)
{
lastDigit *= -1;
}
_putchar(lastDigit + '0');
return (lastDigit);
}
