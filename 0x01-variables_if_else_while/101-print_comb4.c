#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int d, p, q, r;
for (d = '0'; d < '9'; d++)
{
for (p = d + 1; p <= '9'; p++)
{
for (q = p + 1; q <= '9'; q++)
{
for (r = q + 1; r <= '9'; r++)
{
if (((p != d) != q) != r)
{
putchar(d);
putchar(p);
putchar(q);
putchar(r);
if (d == '6' && p == '7' && q == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
