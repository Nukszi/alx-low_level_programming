#include <stdio.h>

/**
 * main - A program that prints the alphabet
 *
 * Description: This program prints the alphabets in small letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	/* start from a */
	letter = 97;

	while (letter <= 122)
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}
