#include <stdio.h>

int main(void)
{

 double score[20][5];
 int i , j;
 double total = 0 ,  res;
 int number;

 puts("insérer les nombres des éléves");
  scanf("%d", &number)
 
 for(i = 0; i < number; i++)
 {

  printf("insérer les 5 notes d'éléve %d :  ", i + 1);

  for(j = 0; j < (sizeof(score) / sizeof(score[0])); j++)
  {

   scanf("%lf", &score[i][j]);
  }
 }

  for(i = 0; i < number; i++)
  {
   
   for(j = 0; j < 5; j++)
   {
 
    total = total + score[i][j];
   }
 
   res = total / 5.0;
   printf(" la moyenne de %d éléve est : %.3lf\n", i + 1, res);
   total = 0;

  }

 return 0;

}

   
   
   
