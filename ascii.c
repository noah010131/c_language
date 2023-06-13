#include <stdio.h>
#include <string.h>
int main(void)
{

 char sentence[60];
 int count = 0;
 int i;

 printf("문장 입력:");
 fgets(sentence, sizeof(sentence),stdin);

 for (i = 0; i < (sizeof(sentence) / sizeof(sentence[0])); i++)
 {
    if (sentence[i] > 64 && sentence[i] < 91)
  { sentence[i] += 32;
    count += 1;
  }
 }

 printf("바뀐 문장:%s\n", sentence);
 printf("바뀐 문자 수: %d\n", count);

return 0;

}
