#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i, alphabet;
for (i = 0; i < 10; i++)
{
for (alphabet = 97; alphabet <= 122; alphabet++)
{
_putchar(alphabet);
}
_putchar(10);
}
return;
}
