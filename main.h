#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
  * struct format - matches the converstion specifier
  *for printf
  *@id: format specifier
  *@f: pointer to function specifiers
  */
typedef struct format
{
	char *id;
	int (*f)();
} con_match;
int _printf(const char *format, ...);
int char_put(char c);
int printf_percent(void);
int print_char(va_list value);
int print_decimal(va_list args);
int print_int(va_list args);
int print_string(va_list val);
int print_strrev(va_list args);
int printf_rot13(va_list args);
int print_binary(va_list val);
int print_unsigned(va_list args);
int print_octal(va_list val);
int print_hex(va_list val);
int print_hex_aux(unsigned long int num);
int print_HEX(va_list val);
int print_HEX_aux(unsigned int num);
int print_exclusive_string(va_list val);
int print_pointer(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);

#endif
