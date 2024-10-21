#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int y = 4; char *str;
	printf("stack memory: %d\n" , y);

	str = malloc(100*sizeof(char));
	str[0] = 'm';
	for(int i =0; i< 100; i++)
	{
		printf("heap memory: %c\n", str[i]);
	}
	free(str);
	printf("heap memory: %c\n", str [0]);
	return 0;
}
