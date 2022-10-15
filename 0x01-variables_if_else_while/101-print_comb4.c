#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, o, g;

	m = 48;
	o = 48;
	g = 48;

	while (o < 58)
	{
		m = 48;
		while (m < 58)
		{
			g = 48;
			while (g < 58)
			{
				if (o != m && o != g && m != g && o < m && m < g)
				{
					putchar(o);
					putchar(m);
					putchar(g);
					if (m == 56 && o == 55 && g == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				g++;
			}
			m++;
		}
		o++;
	}
	putchar('\n');
	return (0);
}
