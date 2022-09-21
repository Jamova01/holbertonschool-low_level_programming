#include <stdio.h>
/**
 * main - C program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
char alphabetLowercase = 'a';
while (alphabetLowercase <= 'z')
{
if (alphabetLowercase != 'q' && alphabetLowercase != 'e')
{
putchar(alphabetLowercase);
}
alphabetLowercase++;
}
putchar('\n');
return (0);
}
