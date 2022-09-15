#include <stdio.h>
/**
 * main - program that prints either number
 * or fizz or buzz or fizzBuzz
 * Return: returns 0
 */
int main(void)
{
for (int num = 1; num < 100; num++)
{
if ((num % 3 == 0) && (num % 5 == 0))
{
printf("FizzBuzz\n");
}
else if ((num % 3) == 0)
{
printf("Fizz\n");
}
else if ((num % 5) == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", num);
}
printf("\n");
return (0);
}
}
