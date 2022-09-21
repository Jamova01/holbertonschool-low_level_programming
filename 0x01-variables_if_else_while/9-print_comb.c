#include <stdio.h>
/**
 * main - C that prints all the numbers of base
 * 16 in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char numbers;
numbers = 48;
while (numbers <= 57)
{
putchar(numbers);
if (numbers != 57)
{
putchar(44);
putchar(32);
}
numbers++;
}
putchar(10);
return (0);
}
