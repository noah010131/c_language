#include <stdio.h>

int main (void)

{

int i,j, a, n, res;
n = 0;
a = 2;
for ( j = 0; j < 8; j++)
{
	for ( i = 0; i < 9; i++)
	{

	res = a * ++n;
	printf("%d * %d = %d\n", a,  n, res);
	}
a += 1;
n -= 9;
printf("\n\n\n");
}
return 0;

}
