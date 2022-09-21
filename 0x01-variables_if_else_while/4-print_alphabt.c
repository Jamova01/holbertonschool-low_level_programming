#include <stdio.h>
/**
 * main - C program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
char alphabetLowercase = 97;
while (alphabetLowercase <= 122)
{
if (alphabetLowercase != 113 && alphabetLowercase != 101)
{
putchar(alphabetLowercase);
}
alphabetLowercase++;
}
putchar(10);
return (0);
}
