#include "main.h"

/**
 * _isalpha - checks for alphabets
 *
 * Description: a program to return 1 when alpabet else 0.
 * @c: the variable to be checked.
 *
 * Return: return 1 if c is an alpabet else 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
