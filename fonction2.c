#include <stdio.h>

void print_qqch(char a[], int b);

int main(void)
{
 char a[30];
 int b;
 printf("반복하고싶은 숫자나 문자(열)를 먼저 입력하시고, 반복횟수를 입력하세요:\n");

 print_qqch (a, b);

 return 0;
}

void print_qqch( char ch[], int in)
{
 int i;
 scanf("%s%d", ch, &in);

 for (i = 0; i < in; i++)
 {
  printf("%s", ch);
 }
 printf("\n");
 
 return;
}  
