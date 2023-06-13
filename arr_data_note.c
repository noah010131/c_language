#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct grade
{
	int num;
	char* name;
	int score[3];
	double moyenne;
	int total;
	char alphabet;
} Grade;

int main(void)
{
	int i;
	int j;
	Grade list[5];
	Grade Temp;
	double max_moyenne;

  for(i = 0; i < 5; i++)
 {
   list[i].name = (char*)malloc(15);
 }

 for(i = 0; i < 5; i++)
 {
	printf("학번 : ");
	scanf("%d", &list[i].num);
	printf("이름 : ");
	scanf("%s", list[i].name);
	printf("국어, 영어, 수학 점수: ");
	scanf("%d%d%d", &list[i].score[0], &list[i].score[1], &list[i].score[2]);
	puts("");

	list[i].moyenne = (( list[i].score[0] + list[i].score[1] + list[i].score[2]) / 3);
	list[i].total = ( list[i].score[0] + list[i].score[1] + list[i].score[2]);
	
	if(list[i].moyenne >= 90){ list[i].alphabet = 'A';}
	else if((list[i].moyenne >= 80) && (list[i].moyenne < 90)){ list[i].alphabet = 'B';}
	else if((list[i].moyenne >= 70) && (list[i].moyenne < 80)){ list[i].alphabet = 'C';}
	else list[i].alphabet = 'F'; 
	
} 

 puts("# 정렬 전 데이터...");	
 for(i = 0; i < 5; i++)
 {

  printf("%2d %s\t%d  %d  %d\t%d\t%.1lf %c\n",
  list[i].num, list[i].name, list[i].score[0], list[i].score[1], list[i].score[2], list[i].total, list[i].moyenne, list[i].alphabet);
 
 }
 for(j = 0; j < 5; j++)
 {
  for(i = 0; i < 4; i++)
  {
    
	if(list[i].total > list[i+1].total)
	{
	 
		Temp = list[i+1];   
                list[i+1] = list[i];
                list[i] = Temp; 
	}
   }
 }
 puts("# 정렬 후 데이터...");
 for(i = 4; i >= 0; i--)
 {
  
  printf("%2d %s\t%d  %d  %d\t%d\t%.1lf %c\n", list[i].num, list[i].name, list[i].score[0], list[i].score[1], list[i].score[2], list[i].total, list[i].moyenne, list[i].alphabet);

 }


  for(i = 0; i < 5; i++)
 {

   free(list[i].name);
 }

 return 0;

}

   
