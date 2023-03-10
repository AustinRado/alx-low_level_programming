#include "main.h"
#include <stdlib.h>

/**
* main - multiples two number assumed to be store in an integer
* @argc: argument count
* @argv: argument vector
*
* Return: int
*/

int main(int argc, char **argv)
{
int counter, num1, num2, res;

counter  = 0;
if (argc > 0)
{
	while (counter < argc)
	{
		if (argc == 3)
		{
			if (counter == 1)
				num1 = atoi(argv[counter]);
			else if (counter == 2)
				num2 = atoi(argv[counter]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		res = (num1 * num2);
		counter++;
	}
	printf("%d\n", res);
}
return (0);
}
