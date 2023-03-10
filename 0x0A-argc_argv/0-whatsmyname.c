#include <stdio.h>
#include "main.h"

/**
* main - print the number of argc
* @argc: argument counter i.e. the number of argument passed
* @argv: argument vector i.e array of arguments passed
* which include the function name
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	argc = 0;

	printf("%s\n", argv[argc]);
	return (0);
}
