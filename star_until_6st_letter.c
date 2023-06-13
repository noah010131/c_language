#include <stdio.h>
#include <string.h>

void delete_letter( char *pa);

int main(void)
{
    char str[20];
    char *pa = str;
    int i = 5;
    char res[15];
    
    printf("단어입력 :");
    fgets(str, sizeof(str), stdin);
    strcpy(res, str);
    res[strlen(res)-1] = '\0';
    
    delete_letter( str);

    printf("입력한 단어 : %s, 생략한 단어 %s\n", res, pa);

  

 return 0;
}


void delete_letter( char *pa)
{
 
 int len = strlen(pa) - 1;
    if (len > 5)
    { 

    pa[5] ='\0';
    strncat( pa, "*******", len - 5);
    
    }
    
    

}
