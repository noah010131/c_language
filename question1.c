#include<stdio.h>

int main() {
int i;
int j;
int N;
int k;

scanf("%d",&N);

for (i = 1; i <= N; i++){
	for (j = (N - i); j > 0; j--){
	printf(" ");
}
	for (k = 1; k <= (i*2-1); k++){
	printf("*");
}
 printf ("\n");
}
return 0;
}
