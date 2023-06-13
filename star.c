#include<stdio.h>

int main(void)
{

	int i, j;

	for(i = 0; i < 9; i++){
		for(j = 0; j <= i; j ++){

			printf("*");

		}

		puts("\n");

	}

	return 0;

}
