#include <stdio.h>

int main()

{
	int N;

	scanf("%d", &N);

	int i;
	int j;
	int k;

	for (i = 1; i <=N; i++)
	{
		for (j = 0; j <=i-1 ; j++)
		{
			printf(" ");
		}

		for (k = 1; k <= N - 2 * i + 2; k++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
