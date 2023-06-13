#include <stdio.h>

int main(void)

{

 int num, i;     
 double score[15], tot = 0, res = 0;

 printf("insérer les notes des matières pour calculer la moyenne générale:\n");
 num = sizeof[i] / sizeof[Ø];

 for ( i = 0; i < num; i++) scanf("%lf", &score[i]);

 for ( i = 0; i < num; i++) tot += score[i];

printf("les notes que vous avez insérer sont:\n");

 for ( i = 0; i < num; i++) printf("%.2lf\n", score[i]);

res = tot / (double)num;

printf("votre moyenne est : %.2lf\n", res);

 return 0;
}

