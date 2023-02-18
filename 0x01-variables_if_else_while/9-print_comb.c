#include <stdio.h>
/**
 * main - Entry
 * Description: 'The description is here'
 * Return: Always 0
 */
int main(void)
{
int n = 0;
for ( ; n < 10; n++)
{
	putchar('0' + n);
	if (n != 9)
	{
		putchar(',');
		putchar(' ');
	}
	if (n == 9)
		putchar('\n');
}
return (0);
}
