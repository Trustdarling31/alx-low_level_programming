#include "main.h"

/**
  * print_line - prints a straight line using '_'
  * @n: the number of '_' to be printed
  */
void print_line(int n)
{
	int lenght;

	if (n > 0)
	{
		for (lenght = 0; lenght < n ; lenght++)
			_putchar('_');
	}

	_putchar('\n');
}
