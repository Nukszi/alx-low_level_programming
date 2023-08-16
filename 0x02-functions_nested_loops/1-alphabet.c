#include "main.h"
/**
 * print_alphabet - Program to print alphabets
 *
 * Description: this is a program that prints lower case alphabets with putchar
 *
 * Return: always 0 (successful)
 */
void print_alphabet(void)
{
	char a;

	a = 97;
	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

