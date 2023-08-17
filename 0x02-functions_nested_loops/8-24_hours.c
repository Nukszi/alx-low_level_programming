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

	H = 0;
	while (H < 24)
	{
		M = 0;
		while (M < 60)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
			M++;
		}
		H++;
	}
}
