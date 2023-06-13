#include <stdio.h>


struct profile
{

 char name[30];
 int age;
 double height;

};

int main(void)
{

	struct profile pf1 ={ "박찬영", 22, 180.5 },
		       pf2 ={ "박인창", 51, 169.8 },
		       pf3 ={ "박하영", 18, 167.0 },
		       pf4 ={ "김인숙", 49, 170.0 };

	struct profile max = pf1;

	if ( pf2.height > pf1.height ) max = pf2;
	if ( pf3.height > max.height ) max = pf3;
	if ( pf4.height > max.height ) max = pf4;

	printf("우리집에서 가장 키가 큰 사람은 :");
	printf(" %s 입니다!\n\n", max.name);

	printf("나이 : %d, 키 : %.lf\n", max.age, max.height);

	return 0;

} 
