#include <stdio.h>
/**
 * main - C program that prints the alphabet in lowercase & Uppercase
 * Return: 0
 */
int main(void)
{
char alphabetLowercase, alphabetUppercase;
alphabetLowercase = 'a';
alphabetUppercase = 'A';
while (alphabetLowercase <= 'z')
putchar(alphabetLowercase++);
while (alphabetUppercase <= 'Z')
putchar(alphabetUppercase++);
putchar('\n');
return (0);
}
