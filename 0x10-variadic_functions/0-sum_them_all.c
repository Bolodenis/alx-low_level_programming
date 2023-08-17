#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of all its parameters.
*@n: given number.
 *Return: the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int k, sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(list,  n);
	for (k = 0; k < n; k++)
		sum = sum + va_arg(list, int);
	va_arg(list, int);
	va_end(list);

	return (sum);
}
