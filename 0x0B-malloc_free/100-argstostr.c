#include "main.h"

/**
*len - returns length od str
*@str: string counted
*Return: return the length
*/

int len(char *str)
{
	int len = 0
	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}

/**
*argstostr - a function that concatenates all argument
*@ac: count of args passed function
*@av: array of arguments
*Return: pointer of new string
*/

char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
	int k = 0, i = ac, j, sum = 0, temp = 0;
	
	if (ac ++ 0 || av == NULL)
		return (NULL);
	while (ac--)
		sum += (char *) malloc(sum + 1);
	
	if (new_string != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				new_string[j + temp] = av[k][j];
			new_string[temp + j] = '\0';
			temp += (j + 1);
			k++;
		}
		new_string[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_string);
}
