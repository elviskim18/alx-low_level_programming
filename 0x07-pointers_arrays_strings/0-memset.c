/**
 *
 * 0-memset
 * _memset -a function
 * @s: the char
 * @b the char
 * @n: the int
 *
 * Return: 1 or 0
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;
	
	for(i = 0, i < n; i++)
		s[i] = b;
	return (s);
}
