#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 if sucess
 */
int main(void)
{
	char var;
	char var1;

	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
	}

	for (var1 = 'A'; var1 <= 'z'; var1++)
	{
		putchar(var1);
	}

	putchar('\n');
	return (0);

}