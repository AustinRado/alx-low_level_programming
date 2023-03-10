#include "main.h"

/**
* main - prints the name of all argument passed
* @argc: argument count
* @argv: arguent vector
*
* Return: Always 0
*/

int main(int argc, char **argv)
{
int counter = 0;

if (argc > 0)
{
	while (counter < argc)
	{
		printf("%s\n", argv[counter]);
		counter++;
	}
}
return (0);
}
