#include <stdio.h>

double add(double a, double b)
{
 return(a + b);
}

int main(void)
{

 double a = 2.0, b = 3.1;
 double res;

 res = add(a, b);
 printf("%.2lf", res);

return 0;
}
