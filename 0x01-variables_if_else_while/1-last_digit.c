#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum > 5)
		printf("Last digit of %d is %d and is grater than 5", n, lastNum);
	else if (lastNum == 0)
		printf("Last digit of %d is %d and is 0", n, lastNum);
	else (lastNum < 5)
		printf("Last digit of %d is %d and less than 6 and not 0", n, lastNum);
	return (0);
}
