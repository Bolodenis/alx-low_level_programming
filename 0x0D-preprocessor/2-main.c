#include <stdio.h>
/**
 * Main -program that prints the name
 * of the file it was compiled from
 *  followed by a new line.
 *  Author - Denis Bollo
 */
void main(void)
{

	printf("The name of the file: %s\n", __FILE__);


	return (0);
}
