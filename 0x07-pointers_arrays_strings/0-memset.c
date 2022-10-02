#include <stdio.h>
#include <string.h>
/**
 * main-fills memory with constant byte
 * @n-number of byte
 * @s-pointermemory area
 * @b-address
 *
 *return:pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{	
	return(memset(s, b, n));
}
