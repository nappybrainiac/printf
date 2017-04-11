#ifndef PRINTF
#define PRINTF

/* print_char - prints out a single function. */
int print_char(char c);

/* print_number - prints out a string from an int. */
void print_number(int n);

/* _printf - prints a formatted string that replaces directives.*/
int _printf(const char *format, ...);

/* str_len - returns the length of a string. */
int str_len(char *s);

/* print_string - prints out a string using print_char*/
void print_string(char *str);

/* count_digits - returns the number of digits in an int.*/
int count_digits(int n);

#endif /* PRINTF */
