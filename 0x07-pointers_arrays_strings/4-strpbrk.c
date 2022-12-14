#include "main.h"

/**
  * _strpbrk - located the first occurence in s if any bytes in accept
  * @s: the string we look for occurences in
  * @accept: theb print we compare against
  *
  * Return: a pointer to bytes or NULL
  */
char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
