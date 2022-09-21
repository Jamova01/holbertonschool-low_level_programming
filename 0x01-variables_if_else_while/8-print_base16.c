#include <stdio.h>
/**
 * main - C that prints all the numbers of base
 * 16 in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char numbers, alphabetLowercase;
numbers = '0';
alphabetLowercase = 'a';
while (numbers <= '9')
putchar(numbers++);
while (alphabetLowercase <= 'f')
putchar(alphabetLowercase++);
putchar('\n');
return (0);
}
