#include "main.h"

/**
 * _printf - A custom printf function
 * @format: the string argument
 *
 * Return: the total number of characters
 */

int _printf(const char *format, ...)
{
	int total_char = 0;
	va_list ap;

	va_start(ap, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
			case 'c':
				total_char += print_char(ap);
				break;
			case 's':
				total_char += print_str(ap);
				break;
			case '%':
				putchar('%');
				break;
			default:
			{
				putchar(*format);
				total_char++;
				break;
			}
			}
		}
		else
		{
			putchar(*format);
			total_char++;
		}

		format++;
	}
	va_end(ap);
	return (total_char);
}
