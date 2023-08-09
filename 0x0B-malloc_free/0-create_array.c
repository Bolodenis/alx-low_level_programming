#include "main.h"
#include <stdlib.h>
/**
 ** function that creates an array of chars,
 *and initializes it with a specific char
 *@size: size of the array to be created
 *@c: char to initialize the array c
 *Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c);
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	P = (char *) malloc(sizeof(char) * size);

	if (p == 0)
		return (0);

	while (i < size)
{
	*(p + 1) = c;
	i++;

}
	*(p + i) = '\0';

	return (p);










}
