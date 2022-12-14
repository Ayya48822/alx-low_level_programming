#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to print
 */

void print_number(int n)
{
	int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	int s0, s1, s2, s3, s4, s5, s6, s7, s8, s9;

	a0 = n / 1000000000; s0 = a0; a1 = (n / 100000000) % 10; s1 = s0 + a1;
	a2 = (n / 1000000) % 10; s2 = s1 + a2; a3 = (n / 1000000) % 10; s3 = s2 + a3;
	a4 = (n / 100000) % 10; s4 = s3 + a4; a5 = (n / 10000) % 10; s5 = s4 + a5;
	a6 = (n / 1000) % 10; s6 = s5 + a6; a7 = (n / 100) % 10; s7 = s6 + a7;
	a8 = (n / 10) % 10; s8 = s7 + a8; a9 = n % 10;

	if (n < 0)
	{
		_putchar('-');
		a0 *= -1; a1 *= -1; a2 *= -1; a3 *= -1; a4 *= -1; a5 *= -1;
		a6 *= -1; a7 *= -1; a8 *= -1; a9 *= -1;
	}

	if (s0 != 0)
		_putchar('0' + a0);
	if (s1 != 0)
		_putchar(48 + a1);
	if (s2 != 0)
		_putchar(48 + a2);
	if (s3 != 0)
		_putchar(48 + a3);
	if (s4 != 0)
		_putchar(48 + a4);
	if (s5 != 0)
		_putchar(48 + a5);
	if (s6 != 0)
		_putchar(48 + a6);
	if (s7 != 0)
		_putchar(48 + a7);
	if (s8 != 0)
		_putchar(48 + a8);
	_putchar(48 + a9);
}
