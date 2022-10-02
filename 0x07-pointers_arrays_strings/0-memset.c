#include <stdio.h>
#include <string.h>
/**
 * main-fills memory with constant byte
 *@s:pionter
 *@n:number of byte
 *@b:charatcer to fill with

 *return:pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{	
	return(memset(s, b, n));
}
