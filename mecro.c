#include <stdio.h>
#define PRINT(x) printf(#x " = %d\n", x)
#define NAME(x, y) (x ## y)


int main(void)

{

	int a1, a2;

	NAME(a, 1) = 24;
	NAME(a, 2) = 34;

	PRINT( a1 + a2);
	PRINT( a1 * a2);


	return 0;

}
