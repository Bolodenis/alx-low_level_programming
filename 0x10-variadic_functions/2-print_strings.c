#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*declare va_list and the unsigned int i*/
	va_list string;
	unsigned int i;
	/*initiliaze va_list with va_start to accept arguments*/
	va_start(string, n);
	/*looping through to get values of va_arg*/
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(string, char *);
	if (str == NULL)
		printf("nil");
	else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
		va_end(string);
			printf("\n");
}
