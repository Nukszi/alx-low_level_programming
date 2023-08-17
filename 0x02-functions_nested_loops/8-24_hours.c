#include "main.h"
/**
 * jack_bauer - time printer
 *
 * Description: this program prints ever min of the day.
 *
 * Retun: Always 0
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 23; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
