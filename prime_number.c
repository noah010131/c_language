#include <stdio.h>

int main(void)
{
int a, i, j, res, res1;
res1 = 0;
int count = 0;

printf("2 이상의 정수를 입력하세요:");
puts("\n");
scanf("%d", &a); 
puts("\n");

for( i = 2; i <= a; i++)
{
 for( j = 1; j <= i; j++)
 {
 res = ((i % j) == 0) ? 0 : 1;
 res1 += res;
 }
 if (res1 == ( i - 2))
  { count++;
    printf("%d\t ", i);
	
    if (count == 5)
	{
	 printf("\n");
	 count = 0;
	}
  }
res1 = 0;
}

puts("\n");

return 0;
}