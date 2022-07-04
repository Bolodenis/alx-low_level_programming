#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*program that prints all single digit numbers 
*of base 10 starting from 0, 
*Return: Always (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
	putchar('\n');
return (0);
}
