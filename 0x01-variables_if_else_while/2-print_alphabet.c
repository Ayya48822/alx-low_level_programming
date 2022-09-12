#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 after printing
 */
int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);

}
