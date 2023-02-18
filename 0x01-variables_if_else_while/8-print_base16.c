#include <stdio.h>
/**
 * main - Entry
 * Description: 'The description is here'
 * Return: Always 0
 */
int main(void)
{
int n = 0;
char m = 'a';
for ( ; n < 10; n++)
	putchar('0' + n);
for ( ; m <= 'f'; m++)
	putchar(m);
putchar('\n');
return (0);
}
