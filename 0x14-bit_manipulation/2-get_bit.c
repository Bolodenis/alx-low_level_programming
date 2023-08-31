#include "main.h"

/**
 * get_bit - returns the value of a bit of a given index 
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);
	return ((n >> index) & 1);
}
