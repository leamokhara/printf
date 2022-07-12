#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)(va_list);
} convert_match;

int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int print_percent(va_list val);
int (*get_func(char x))(va_list);
int print_d(va_list args);
int print_i(va_list args);

/**
 * struct code_format - Struct format
 *
 * @sc: The specifiers
 * @f: The functions associated
 */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

=======
#include <stdarg.h>

/**
 * struct convert - struct for symbols and functions.
 *
 * @sym: The format symbol
 * @f: The function associated
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int (*get_func(char x))(va_list);
>>>>>>> 92c86ff9f2412ac3e350ac0f4263394db87b89bc

#endif
