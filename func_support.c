#include "main.h"

/**
 * print_char - A function that prints a character
 * @ap: argument pointer
 *
 * Return: an integer
 */

int print_char(va_list ap)
{
	char ch = va_arg(ap, int);

	putchar(ch);
	return (1);
}

/**
 * print_str - A function that prints a character
 * @ap: argument pointer
 *
 * Return: an integer
 */

int print_str(va_list ap)
{
	char *str = va_arg(ap, char*);

	if (str != NULL)
		fputs(str, stdout);
	else
		fputs("(nil)", stdout);

	return (strlen(str));
}
