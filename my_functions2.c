#include "main.h"

/**
 * print_exclusive_string - print exclusives string.
 * @val: argument.
 * Return: the length of the string.
 */

int print_exclusive_string(va_list val)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			char_put('\\');
			char_put('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				char_put('0');
				len++;
			}
			len = len + print_HEX_aux(cast);
		}
		else
		{
			char_put(s[i]);
			len++;
		}
	}
	return (len);
}

/**
 * print_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			char_put(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	char_put('0');
	char_put('x');
	b = print_hex_aux(a);
	return (b + 2);
}

/**
 * _strlen - lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
/**
 * _strlenc - Strlen
 * @s: Type char pointer
 * Return: c
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
