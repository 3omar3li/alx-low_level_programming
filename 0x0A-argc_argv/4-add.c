#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int i;
	int k;
	int sum = 0;
	char *str;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];

			for (k = 0; str[k] != '\0'; k++)
			{
				if (str[k] < 48 || str[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(str);
			str++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
