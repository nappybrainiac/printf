#ifndef PRINTF
#define PRINTF
#include <stdarg.h>

/* print_char - prints out a single function. */
int print_char(char c);

/* print_number - prints out a string from an int. */
void print_number(int n);

/* _printf - prints a formatted string that replaces directives.*/
int _printf(const char *format, ...);

/* str_len - returns the length of a string. */
int str_len(char *s);

/* print_string - prints out a string using print_char*/
int print_string(char *str);

/* count_digits - returns the number of digits in an int.*/
int count_digits(int n);

/* replace - returns the length of the argument being used.*/
int replace(char c, va_list ap);

/* c_dir - returns the length of the c directive.*/
int c_dir(va_list ap);

/* s_dir - returns the length of the s directive. */
int s_dir(va_list ap);

/* id_dir - returns the length of the i and d directives. */
int id_dir(va_list ap);

#endif /* PRINTF */
