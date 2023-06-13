#include <stdio.h>

int main(void)
{

 int a = 10;
 int *p = &a;
 int **pp = &p;

 printf("adress\n");
 printf(" a = %u, p = %u, pp = %u\n\n", &a, &p, &pp);
 printf("value\n");
 printf(" a = %d, *p = %d, **pp = %d\n\n", a, *p, **pp);
 printf("self value\n");
 printf(" p = %d; pp = %d\n", p, pp);

 return 0;

 }
