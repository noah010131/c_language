#include <stdio.h>
int main() {
	int i, N;
	i = 2;

	printf("자연수 N을 소인수분해합니다. \n");
	printf("자연수 N값을 입력하세요. \n");
	scanf("%d", &N);

	printf("N = %d , %d = ", N, N);

	while (i) {
		if (N % i == 0) {
			N /= i;
			printf("%d", i);
			if (N == 1) break;
			printf("*");
		}
		else {
			i++;
		}
	}
	return 0;
} 
