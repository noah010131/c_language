#include <stdio.h>

int rec_func( int n);

int main(void)
{

 printf("%d\n", rec_func(1));

return 0;

}

int rec_func( int n)
{
 if ( n == 10) return 10;
 return n + rec_func(n + 1);
}
