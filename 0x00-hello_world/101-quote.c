#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point for the program
 *
 * Description: This program writes a specific message to the standard error
 *              stream using the write system call.
 *
 * Return: Always 1 (success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
