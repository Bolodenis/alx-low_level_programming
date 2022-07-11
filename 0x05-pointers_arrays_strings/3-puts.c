#include "main.h"
/**
*_puts -Write a function that prints a string, followed by a new line
* to stdout
*@str: this is my input string
*/
void _puts(char *str);
{
int index;
for (index = 0; str[index] != '\10' ; index++)
{
_putschar(str[index]);
}
_putschar('\n');
}
