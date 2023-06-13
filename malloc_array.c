#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

 char temp[70];
 char *str[3];
 int i;
 
 for (i = 0; i < 3; i++)
 {
  
  puts("문자열을 입력하세요\n");
  fgets(temp,sizeof(temp), stdin);
  temp[strlen(temp) - 1] = '\0';
  str[i] = (char*)malloc(strlen(temp) + 1);
  strcpy(str[i], temp);
 }

 puts("\n");

 for (i = 0; i < 3; i++)
 {
  printf("%s\t", str[i]);
  free(str[i]);
 }
 puts("\n");
 return 0;

}
