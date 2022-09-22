#include "main.h"
/**
 * print_alphabet -  function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0
 */
void print_alphabet(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
_putchar(alphabet++);
_putchar('\n');
return;
}
