#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: 'The description is here'
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, i, k;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (c < i && i < j)
				{
					putchar(c);
					putchar(i);
					putchar(j);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

