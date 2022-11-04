#include "main.h"
/**
  *_memset - fill of memory with a specific value
  *@s: starting of memory to be filled
  *@b: the desire value
  *@n: number of bytes to be changed
  *
  *Return: changed array with new value for n bytes
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	*ptr++ = b;
	return (s);
}
