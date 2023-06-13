#include <stdio.h>

int main(void)
{

double a = 3.19;
double *db;

db = &a;
int *in = (int*)db;

printf("%p\n", db);
printf("%p\n", in);
printf("%.2lf", *db);

return 0;

}

