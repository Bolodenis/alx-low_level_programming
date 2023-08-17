#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers sum.
 * @separator: resepresents the seperator b/w the numbers
 * @n: number of arguments passed
 * Return: retun 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*declare va_list to hold the declared arguments */
	va_list myproject;
	unsigned int i;
	/*initialize the va_start with variable argument*/
	va_start(myproject, n);
		/*loops through va_list projcet to access the arguments*/
		for (i = 0; 1 < n; i++)
			printf("%d", va_arg(myproject, unsigned int));
					if (i < (n - 1) && separator != NULL)
					printf("%s", separator);
					printf("\n");
					va_end(myproject);

}
