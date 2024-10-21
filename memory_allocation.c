#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n = 11;
	int *ptrToN = n;
	printf("n's address; %d and %d ptrToN value \n", &n, ptrToN);
	printf("n's value: %d and ptrToN points to value %d \n", n, *ptrToN);
	return 0;
}
