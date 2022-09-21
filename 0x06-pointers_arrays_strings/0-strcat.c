#include "main.h"
/**
 * strcat-concatenates the string pointed to by @src to
 * the ende pf the string pointed to by @dest
 * @dest: String that will be appended
 * @srsc: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; stc[indec]; index++
dest[dest_len++] = src[index];
return (dest);
}
