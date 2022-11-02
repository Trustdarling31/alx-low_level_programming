#include "main.h"

/**
  * _strlen_recursion - Returns the lenght of a string.
  * @s: The string to be measured.
  *
  * Return: The lenght of the string.
  */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_ recursion(s + 1);
	}
