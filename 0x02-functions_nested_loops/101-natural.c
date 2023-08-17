#include <stdio.h>
/**
 * main - a program that computes and sums numbers
 *
 * Description: it computes and prints the sum of all x of 3 and 5
 *
 * Return: Always 0.
 */
int main(void)
{
int  y, sum = 0;
for (y = 0; y < 1024; y++)
{
if ((y % 3 == 0) || (y % 5 == 0))
{
sum = sum + y;
}
}
printf("%d\n", sum);
return (0);
}
