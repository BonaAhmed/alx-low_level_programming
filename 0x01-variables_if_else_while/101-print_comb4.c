#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints possible outcomes of three digits
 * Return: 0
 */
int main(void)
{
int g;
int h;
int i = 0;

while (i < 10)
{
h = 0;
while (h < 10)
{
g = 0;
while (g < 10)
{
if (g != d && h != i && i < h && h < g)
{
putchar('0' + i);
putchar('0' + h);
putchar('0' + g);

if (g + h + i != 9 + 8 + 7)
{
putchar(',');
putchar(' ')
}
}

g++;
}
h++;
}
i++;
}
putchar('\n');
return (0);
}
