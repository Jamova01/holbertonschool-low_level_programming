#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i, a;
for (i = 0; i < 10; i++)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar(10);
}
return;
}
