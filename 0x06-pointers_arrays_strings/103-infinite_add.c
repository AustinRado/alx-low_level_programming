#include "main.h"


/**
* infinite_add - Adds two number
* @n1: nummber to ine to check
* @n2: number two check for
* @r: buffer that the function will use to store the resut
* @size_r: sizeof the buffer
* Return: pointer destination
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1 = 0, num2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + num1) != '\0')
		num1++;
	while (*(n2 + num2) != '\0')
		num2++;
	if (num1 >= num2)
		bg = num1;
	else
		bg = num2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	num1--, num2--, size_r--;
	dr1 = *(n1 + num1) - 48, dr2 = *(n2 + num2) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
			*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (num1 > 0)
			num1--, dr1 = *(n1 + num1) - 48;
		else
			dr1 = 0;
		if (num2 > 0)
			num2--, dr2 = *(n2 + num2) - 48;
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
