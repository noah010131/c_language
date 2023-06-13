#include <stdio.h>

void input_ary(double *pa, int size);
double ary_max(double *pa, int size);

int main(void)
{

double ary[5];
int size = sizeof(ary) / sizeof(ary[0]);
double max;

input_ary(ary, size);
max = ary_max(ary, size);

printf("the max is : %.2lf\n", max);

return 0;

}

void input_ary(double *pa, int size)
{
 int i;

 for( i = 0; i < size; i++) scanf("%lf", pa + i);
}

double ary_max(double *pa, int size)  
{
 double max = pa[0];
 int i;

 for ( i = 0; i < size; i++) if( pa[i] > max) max = pa[i];

 return max;
}
