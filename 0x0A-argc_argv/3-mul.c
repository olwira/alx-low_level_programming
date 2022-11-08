#include <stdio.h>
#include "main.h"

/**
 * main - prints multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
return (1);
}
