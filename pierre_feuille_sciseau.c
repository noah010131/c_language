
#include <stdio.h>
#include <string.h>

void fonction(char *(*fp)(void));
char *pierre(void);
char *feuille(void);
char *sciseau(void);

char num[10];

int main(void)
{

 puts("가위바위보 프로그램입니다. 가위, 바위, 보 중 한가지를 선택하여 적어주세요 :");
 fgets(num, sizeof(num), stdin);

 if (strcmp(num, "가위\n") == 0) {
        fonction(pierre);
    } else if (strcmp(num, "바위\n") == 0) {
        fonction(feuille);
    } else if (strcmp(num, "보\n") == 0) {
        fonction(sciseau);
    }

    return 0;
 return 0;

}

void fonction(char *(*fp)(void))
{

 char *res;

 printf("\n\n\n로\n\n\n딩\n\n\n중...\n");

 res = fp();
 
 printf(" 컴퓨터는 %s 를 냈습니다..! 아쉽네여 한번더 해봐요 ㅋ\n", res);
 
}

char *pierre(void)
{
 return "바위";
}

char *feuille(void)
{
 return "보";
}


char *sciseau(void)
{
 return "가위";
}
