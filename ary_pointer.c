#include <stdio.h>

int main(void)
{
int ary[3];
int i;

*(ary + 0) = 10;
*(ary + 1) = *(ary + 0) + 10;
scanf("%d", &ary[2]);

for (i = 0; i < 3; i++) printf("%d", ary[i]);

return 0;

}

