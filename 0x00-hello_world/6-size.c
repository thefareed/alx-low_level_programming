#include <stdio.h>
/**
 * main - A  C program that prints the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of an char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
