#include "main.h"
/**
 * print_alphabet_x10 - program repeating the alphabet 10x
 *
 * Description: this program repeats the alphabets ten time
 *
 * Return: always (0) successful
 */
void print_alphabet_x10(void)
{
	int b = 0;

	while (b <= 9)
	{
		char a = 97;

		while (b <= 122)
		{
			_putchar(a);
			a++
		}

		_putchar('\n');
			b++;
	}
}
