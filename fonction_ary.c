#include <stdio.h>

void print_ary(char *pa, int size);

int main(void)
{
char ary[10] = {'H','E','L','L','O'};
int size = sizeof(ary) / sizeof(ary[0]);
print_ary(ary, size);

return 0;
}

void print_ary(char *pa, int size)
{
 int i;

 for(i = 0; i < size; i++) printf("%c", pa[i]);

 printf("\n");
}
