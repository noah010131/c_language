#include <stdio.h>

int main(void)
{

 int ary[4] = {10,11,3,4};

 ary[0] = 1;

 printf("%d + %d = %d\n", ary[0], ary[1], ary[0] + ary[1]);

 return 0;

}
