#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Function to prints
 * Function to print
 * Return: return 0
 */
int fib(int n)
{
{
if (n <= 1)
return n;
return fib(n - 1) + fib(n - 2);
}
{
int n = 98;
printf("%d", fib(n));
putchar(',');
getchar();
return 0;
}
}
