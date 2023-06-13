#include <stdio.h>

int get_num(void);

int main(void)
{
 get_num();
 return 0;
}

int get_num(void)
{
 int a;
 scanf("%d", &a);
 
 while ( a < 0)
  {
  printf("양수를 입력하세요!\n");
  scanf("%d", &a);
  }
 printf("입력하신 숫자는:%d\n", a);
 return a;
}
