#include <stdio.h>
i
int main (void)

{

 int KG, RES;
 double BMI, CM;

 printf("몸무게(kg)와 키(cm) 입력 :");
 scanf("%d%lf", &KG, &CM);

 BMI = ((double)KG / ((CM * 0.01) * (CM * 0.01)));

 printf("%lf\n", BMI);

 RES = (25.0 > BMI) && (20.0 < BMI);
 printf("%s\n", (RES == 1) ? "표준입니다." : "체중관리가 필요합니다.");

return 0;

} 
