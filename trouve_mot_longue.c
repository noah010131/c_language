#include <stdio.h>

int main(void)
{

 int ch;
 int count = 0;
 int res = 0;

 while (1)
 {
   ch = getchar();

   if ( ch == -1) break;
   
   if ( ch == '\n') 
   {
     if ( count > res) res = count;
     count = 0;
     continue;
   }

   count++;
 }

 printf("가장 긴 단어의 길이: %d\n", res);

 return 0;

}
