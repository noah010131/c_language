#include <stdio.h>


int main(void)
{
  int i = 0, a;
  int arr[50];

  printf(" 번호를 순서대로 입력하면 반대로 출력합니다.\n");
  puts("숫자를 다 작성했으면 점('.')으로 끝을 표현하세요");

  for(;;)
  { 
    scanf("%d", &arr[i++]);

    if( getchar() == '.') break;
    if( i == 49) break;

  }

  for( i = i - 2; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }

  puts("\n");

  return 0;

}