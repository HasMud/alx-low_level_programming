#include "main.h"
/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
if (n ==1 || n == 0)
return (n);
return (squareroot(0, n));
}
/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int squareroot(int n, int i)
{
if (n > i / 2 )
return (-1);
else if (n * n == i)
return (n);
else
return (squareroot(n + 1, i));
}
