#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "abcdfghijklmnopqrstuvwxyz";
int i;

for (i = 0; str[i] != '\0'; i++)
putchar(str[i]);
putchar('\n');

return (0);
}
