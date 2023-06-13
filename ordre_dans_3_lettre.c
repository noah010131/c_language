#include <stdio.h>
#include <string.h>

void swap(char *pa, char *pb);

int main(void)
{

char max[10];
char mid[10];
char min[10];

fputs("세 단어 입력 :", stdout);
scanf("%s%s%s", max, mid, min);


if(strcmp(max, min) > 0) swap(max, min);
if(strcmp(max, mid) > 0) swap(max, mid);
if(strcmp(mid, min) > 0) swap(mid, min);

printf("%s, %s, %s\n", max, mid, min);

return 0;

}
void swap(char *pa, char *pb)
{
        char *temp;

        strcpy(temp, pa);
        strcpy(pa, pb);
        strcpy(pb, temp);
}


