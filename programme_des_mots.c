#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *ap, *bp, *cp;
    char str[10][15], str1[10][15];
    int num = 0, i, j, resres, found;

    ap = fopen("a.txt", "r");
    if(ap == NULL) return 1;

    bp = fopen("b.txt", "r");
    if(bp == NULL) return 1;

    cp = fopen("c.txt", "w");
    if(cp == NULL) return 1;

    // a.txt 파일에서 문자열 읽어들이기
    for(i = 0; i < 10; i++) {
        if(fgets(str[i], 15, ap) == NULL) break;
        str[i][strlen(str[i]) - 1] = '\0'; // 개행문자 제거
    }

    // b.txt 파일에서 문자열 읽어들이기

    for(i = 0; i < 10; i++) {
        if(fgets(str1[i], 15, bp) == NULL) break;
        str1[i][strlen(str1[i]) - 1] = '\0'; // 개행문자 제거
    }

    // 두 개의 문자열을 비교하여, 공통적으로 존재하지 않는 문자열을 파일 c.txt에 출력

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
             resres = strcmp( str1[i], str[j]);       // 두 문자열 비교
             if ( resres == 0) 
	     {
		found = 1;
		break;                 // 비교 후 같으면 break
	     }
	     else found = 0;
        
	}

         if (found != 1)

	 {
		 fputs( str1[i], cp);
		 fputc('\n', cp);
         

         }
	}

    fclose(ap);
    fclose(bp);
    fclose(cp);
    
    return 0;
    
}
