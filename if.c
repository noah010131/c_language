#include <stdio.h>

int main(void)

{

 int a;
 int b;

 printf(" insérer deux chiffres :");
 scanf("%d%d", &a, &b);

 if ((a < 1000000) && (b < 1000000))

 if (a > b)
{
 printf("%d > %d\n", a, b);
}
 else if (a < b)

 printf("%d < %d\n", a,b);

 else printf("%d = %d\n", a, b);

return 0;

}
