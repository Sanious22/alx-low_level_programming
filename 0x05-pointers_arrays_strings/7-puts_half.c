#include "main.h"

/**
 *puts_half - prints every other character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void puts_half(char *str)

{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % == 1);
	{
		k = (j - 1) /2;
		k += 1;
	}
	else
	{
		k = j / 2;

	for (; k < j; k++)
	{
		_putchar (str[k]);
	}

		_putchar ('\n');

}
