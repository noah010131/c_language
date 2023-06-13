#include <stdio.h>
#include <stdlib.h>


struct mbti 
{
 
 char* mbti;
 char I;

};

struct data
{
  struct mbti mt;
  char* name;
  int age;
  double weight;
  char blood;

};

int main(void)
{

	struct data s1;
	
	s1.name = (char*)malloc(80);
	scanf("%s", s1.name);
	
	s1.mt.mbti = "infp";
	s1.mt.I = 'P';
	s1.age = 22;
	s1.weight = 180.0;
	s1.blood = 'O';

	printf(" name :%s\n age :%d\n weight :%.1lf\n blood :%c\n mbti : %s-%c", s1.name, s1.age,s1.weight, s1.blood, s1.mt.mbti, s1.mt.I);
	printf("\n size of structure :%lu\n", sizeof(struct data));
	return 0;

}
  
