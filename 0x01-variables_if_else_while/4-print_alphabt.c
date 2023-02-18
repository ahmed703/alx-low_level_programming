#include <stdio.h>
/**
 * main - Entry
 * Description: 'The description is here'
 * Return: Always 0
 */
int main(void)
{
char n = 'a';
for ( ; n <= 'z'; n++)
{
	if (n == 'q' || n == 'e')
		continue;
	putchar(n);
}
printf("\n");
return (0);
}
