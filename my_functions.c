#include "main.h"

/**
 * printf_percent - prints the char 37.
 *which is the percentage(%) sign
 * Return: 1.
 */
int printf_percent(void)
{
	char_put(37);
	return (1);
}

/**
 * print_char - prints a character
 * @value: arguments.
 * Return: 1.
 */
int print_char(va_list value)
{
	char s;

	s = va_arg(value, int);
	char_put(s);
	return (1);
}

/**
 * print_string - prints string to standard output.
 * @val: argumen t.
 * Return: the length of the string.
 */

int print_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			char_put(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			char_put(s[i]);
		return (len);
	}
}

/**
 * print_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		char_put('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			char_put(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	char_put(last + '0');

	return (i);
}

/**
 * print_decimal - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		char_put('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			char_put(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	char_put(last + '0');

	return (i);
}
