#include "main.c"
/**
 * _isalpha - checks for alphabet chars
 * @c: the checked character
 *Return: 1 for alphabet characters or 0 for anything else
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	return (1);
return (0);
}
