#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry poin
 *
 * Return: Always 0 (Success)
 */
in main(void)
{
char ch, e, q;
e = 'e';
q = 'q';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != e && ch != q)
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
