#include <stdio.h>

int main(void)
{

int ary[4] = { 1, 2, 3, 4};
int *p = ary;
int *pp = p + 2;

printf("p = %u\n", p);
printf("p = %u\n", pp);

printf("p - pp : %d\n", p - pp);

if (p > pp) printf("%d\n", *p);
else printf("%d\n", *pp);

return 0;
}
