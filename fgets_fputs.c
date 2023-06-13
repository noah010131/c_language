#include <stdio.h>
#include <string.h>

int main(void)
{

 FILE *afp, *bfp;
 char str[30];
 char *res;

 afp = fopen("CCC.c", "r");

 if( afp == NULL) return 1;

 bfp = fopen("C.c", "w");

 if ( bfp == NULL) return 1;

 while(1)
 {

	res = fgets(str, sizeof(str), afp);
if( res == NULL) break;
	fputs(str, bfp);
 }

 fclose(afp);
 fclose(bfp);

 return 0;

}
