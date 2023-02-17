#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0 (successful)
 */
int main(void)
{
char w;
int x;
long int y;
long long int z;
float a;

printf("Size of a char:%zu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of an int:%zu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int:%zu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int:%zu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float:%zu byte(s)\n", (unsigned long)sizeof(a));
}
