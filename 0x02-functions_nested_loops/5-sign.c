#include "main.h"
/**
 * print_sign - Determines if the input number
 * greater, equal or lessthan Zero.
 *
 * @n: The input number as an integer
 *
 * Return: 1 is greaterthan zero. 0 is Zero
 * -1 is lessthan Zero
 */
int print_sign(int n)
{
	if(n >0)
	{
		_putchar(43);
		return (1);
	}
	else if (n <0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
