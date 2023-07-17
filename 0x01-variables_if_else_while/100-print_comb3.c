#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - prints all possible different combination of two digits
 * Return; Always 0 (success)
 */

int main(void)

{
	int n, m;
	
	for (n = '0'; n < '9'; n++)
	{

	for (m = n+1; m <= '9'; m++)
	{
	
	if (n != m)
	
	{
	
	putchar(n);
	putchar(m);
	if (n == '8' && m == '9')
	
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	
	return (0);
}
