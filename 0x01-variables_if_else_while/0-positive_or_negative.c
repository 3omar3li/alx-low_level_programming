#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - main function
 * Return: 0 (Success)
*/

int main(void)
{
	
	int n;
	srand(time(0));
	n =rand() - RAND_MAX / 2;

	if(n < 0){
		printf("%d is Negative.\n", n);
	}
	else if(n == 0){
		printf("%d is Zero.\n", n);
	}
	else{
	 	printf("%d is Psoitive.\n", n);
	}

	return(0);
}
