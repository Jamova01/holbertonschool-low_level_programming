#include "main.h"
/**
 * jack_bauer - C function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
int hour;
for (hour = 48; hour <= 50; hour++)
{
int min;
for (min = 48; min <= 57; min++)
{
int second_a;
for (second_a = 48; second_a <= 53; second_a++)
{
int second_b;
for (second_b = 48; second_b <= 57; second_b++)
{
_putchar(hour);
_putchar(min);
_putchar(58);
_putchar(second_a);
_putchar(second_b);
_putchar(10);
}
}
if (hour == 50 && min == 51)
{
break;
}
}
}
return;
}
