#ifndef MAIN_H
#define MAIN_H

/* Standard C library */
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>


/* Function Prototypes */
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);


#endif
