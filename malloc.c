#include <stdio.h>
#include <stdlib.h>

int main(void)
{

 int *p;
 double *pp;

 p = (int *)malloc(sizeof(int));
 if (p == NULL)
 {
  
  printf(" 메모리가 부족합니다.\n");
  exit(1);
 }

 pp = (double *)malloc(sizeof(double));
 if (pp == NULL)
 {
  
  printf(" 메모리가 부족합니다.\n");
  exit(1);
 }


 *p = 9;
 *pp = 38.3;

 printf("%d, %.1lf\n", *p, *pp);

 free(p);
 free(pp);

 return 0;

}

