#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;

	while (c < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
			putchar('0' + d);
			putchar('0' + c);
			
			if (c + d != 17)
			{
				putchar(',');
				putchar(' ');
			}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
