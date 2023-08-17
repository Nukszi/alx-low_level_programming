#include "main.h"
/**
 * _islower - checks for lowcase alphabets
 *
 * Description: Prints with _putchar 1 if alphabets are lower else 0
 * @c: alphabet variable
 *
 * Return: 1 if c is lower else 0
 */
int _islower(int c)
{
	char a;
	int low = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
		{
		low = 1;
		}
	}
	return (low);
}
