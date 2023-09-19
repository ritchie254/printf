#include "main.h"

/**
  * _printf - function that works as standard function printf
  *@format: string
  *
  *Return: length of string
  */

int _printf(const char * const format, ...)
{
	con_match m[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", printf_percent},
		{"%i", print_int}, {"%d", print_decimal}, {"%r", print_strrev},
		{"%R", printf_rot13}, {"%b", print_binary}, {"%u", print_unsigned},
		{"%o", print_octal}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exclusive_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		char_put(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
