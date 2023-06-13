#include <stdio.h>

void my_gets(char *str, int size);

int main(void)
{

 char str[23];

 my_gets(str, sizeof(str));
 printf("입력한 문자열: %s\n", str);

 return 0;

}

void my_gets(char *str, int size)
{

 int i = 0;
 int ch;
 

 while ((ch != '\n') && ( i < size - 1))
 {
  ch = getchar();
  str[i] = ch;
  i++;
  ch = getchar();
 }

 str[i] = '\0';

}


