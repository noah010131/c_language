#include <stdio.h>
int main() {
  int i, a, b, somme = 0;
	printf("a 부터 b 까지의 수를 모두 더해주는 프로그램입니다. a와 b를 입력하세요 \n");
	scanf("%d %d", &a, &b);

  for (i = a; i <= b; ++i) {
	 somme  = somme + i;
  }
  printf("%d 부터 %d 까지의 합 : %d \n", a, b, somme);

  return 0;
}
