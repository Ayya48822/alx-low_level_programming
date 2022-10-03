#include <stdio.h>
#include <stdlib.h>

/**
* main - print the name of the file
* @argc: size of argv
* @argv: size of the arry
*
* Return: Always 0
*/

int main(int argc, char **argv)
{
	while (argc--)
	{	
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
