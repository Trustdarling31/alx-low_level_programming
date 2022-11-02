#include "main.h"
#include <unistd.h>

/**
  * putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: on Success 1.
  * on error, -1 is returnd, and erno is set appropriately.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
