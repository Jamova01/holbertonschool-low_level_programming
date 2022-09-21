#include <stdio.h>
/**
 * main - C program that prints all possible
 * combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
int numbers;
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
