#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Function to prints
 * Function to print
 * Return: return 0
 */
void printFibonacciNumbers(int n)
{
int f1 = 1, f2 = 3, i;
if (n < 1)
return;
printf("%d ", f1);
for (i = 1; i < n; i++) {
printf("%d ", f2);
_putchar(',');
int next = f1 + f2;
f1 = f2;
f2 = next;
}
}
int main()
{
printf("FibonacciNumbers(98");
return 0;
}
