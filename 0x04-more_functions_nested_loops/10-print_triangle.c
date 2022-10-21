#include "main.h"

/**
  * print_triangle - prints a triangle
  * @n: size of the triangle
  */
void print_triangle(int n)
{
	int h, triangle;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (triangle = n - h; tri > 0; triangle--)

				_putchar(' ');
			for (triangle = 0; triangle < h; tirangle++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
