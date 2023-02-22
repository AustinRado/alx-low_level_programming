#include <stdio.h>

/**
* main - print the sum of even terms in Fibonacci sequence
* nit exceeding 4,000,000
*
* Return: Always 0
*/
int main(void)
{
long int a, b, start, fibonacci;
a = 1;
b = 2;
start = fibonacci = 0;

while (fibonacci < 4000000)
{
	fibonacci = a + b;
	a = b;
	b = fibonacci;
	if ((a % 2) == 0)
	{
		start += a;
	}
}
printf("%ld\n", start);
return (0);
}
