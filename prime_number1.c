#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
 int *p;
 int res1 = 0;
 int a, i, j, res;
 int count = 0;
 int k = 0;

 printf("> 양수 입력 :");
 scanf("%d", &a);

 p = (int *)malloc(sizeof(int) * (a - 2));

 for( i = 2; i < a; i++)
{
 for( j = 1; j <= i; j++)
 {
 res = ((i % j) == 0) ? 0 : 1;
 res1 += res;
 }
 count++;

 p[k] = i;

 if (res1 == ( i - 2)) printf("%5d\t", p[k]);
 else printf("%5c\t",'X');
       
 k++;

 if (count == 5) 
  { 
    printf("\n");
    count = 0;
  }
  
res1 = 0;
}
free(p);

puts("\n");

return 0;
}
