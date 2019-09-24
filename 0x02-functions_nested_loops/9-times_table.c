#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void function
 */

void times_table(void)

{

	int c, f;

	for (c = 0; c <= 9; c++)
	{
		for (f = 0; f <= 9; f++)
		{
			int resultado;

			resultado = c * f;

			if (resultado >= 10)
			{
				_putchar((resultado / 10) + '0');
				_putchar((resultado % 10) + '0');
			}
			else
			{
			_putchar(resultado + '0');
			}

			if (f != 9)
			{
				if(((f+1)*c)>=10)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
