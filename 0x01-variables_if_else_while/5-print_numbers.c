#include <stdio.h>
/**
 * main - C program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
char numbers = '0';
while (numbers <= '9')
putchar(numbers++);
putchar('\n');
return (0);
}
