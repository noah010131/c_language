#include <stdio.h>

int main(void)

{

 int num, i; 
 double score[15], tot = 0, res = 0;

 printf("insérer le nombres des matières et les notes des matières:\n");
 scanf("%d", &num);

 for ( i = 0; i < num; i++) scanf("%lf", &score[i]);

 for ( i = 0; i < num; i++) tot += score[i];

printf("les notes que vous avez insérer sont:\n");

 for ( i = 0; i < num; i++) printf("%.2lf\n", score[i]);

res = tot / (double)num;

printf("votre moyenne est : %.2lf\n", res);
 
 return 0;
}
 
  
