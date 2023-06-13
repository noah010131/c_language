#include <stdio.h>

int main(void)
{

int a, i, j, reste;
int count = 0;
int combien = 0;

printf("2 이상의 정수를 입력하세요. 입력하신 수까지의 모든 소수를 출력해줍니다..:");
scanf("%d", &a);

for( i = 2; i < a; i++)
{
 for( j = 2; j < i; j++)
 {
  reste = i % j;
  
  if ( reste == 0) break;
 }
 if ( i == j )
 {
  count++;
  combien++;
  printf("%d	", i);
  if ( count == 5)
     { count = 0;
       printf("\n");
     }
 }
if ( i == (a - 1)) printf("\n\n");
}

printf("소수의 갯수는 %d 입니다.\n", combien);

return 0;
}

  
  
