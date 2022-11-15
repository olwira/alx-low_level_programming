#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
unsigned int i;

i = 0;
while (s[i] != '\0') /*count character of string*/
{
i++;
}

return (i);
}

/**
 * _strcpy - copy arrays
 * @src: source
 * @dest: destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}

/**
 * _strdup - array for prints a string
 *  @str: array of elements
 *  Return: pointer
 */

char *_strdup(char *str)
{
char *dst;
unsigned int size;

if (str == 0)
{
return (NULL);
}

size = strlen(str) + 1;

dst = (char *) malloc(size *sizeof(char));

if (dst == 0)
{
return (NULL);
}
_strcpy(dst, str);
return (dst);
}