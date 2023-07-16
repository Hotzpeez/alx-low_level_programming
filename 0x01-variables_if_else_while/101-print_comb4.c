#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{

	int n, m, l;

for (n = '0'; n < '9'; n++)
	{
	for (m = n + 1; m <= '9'; m++)
	{
	for (l = m + 1; l <= '9'; l++)
	{
	if ((m != n) != l)
{
	putchar(n);
	putchar(m);
	putchar(l);
	if (n == '7' && m == '8')
	continue;
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');

	return (0);
}
