#include <stdio.h>
/**
 * main - Entry
 * Descripion: 'Here is the description'
 * Return: Always 0
*/
int main(void)
{
char n = 'a';
for (; n <= 'z'; n++)
	putchar(n);
n = 'A';
for (; n <= 'Z'; n++)
	putchar(n);
printf("\n");
return (0);
}
