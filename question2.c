#include<stdio.h>

int main(){

int i;
int j;
int N;
int k;

scanf("%d",&N);

for ( i = 1; i <= N; i++){
 for ( k = 0; k <= i - 1; k++){
printf(" ");
}
 for ( j = 1; j <= (N-2*i+3); ++j){
printf("*");
}
printf("\n");

}

return 0;
}
